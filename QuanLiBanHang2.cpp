#include <bits/stdc++.h>

int mKH = 0, mMH = 0, mHD = 0;

using namespace std;

class KhachHang;

vector<KhachHang> khv;

class KhachHang
{
private:
     string maKH, ten, gioiTinh, ngaySinh, diaChi;

public:
     KhachHang()
     {
          maKH = ten = gioiTinh = ngaySinh = diaChi = "";
     }

     friend istream &operator>>(istream &in, KhachHang &kh)
     {
          mKH++;
          kh.maKH = "KH";
          for (int i = 0; i < 3 - to_string(mKH).size(); i++)
          {
               kh.maKH += "0";
          }
          kh.maKH += to_string(mKH);
          if (mKH == 1)
               cin.ignore();
          getline(cin, kh.ten);
          getline(cin, kh.gioiTinh);
          getline(cin, kh.ngaySinh);
          getline(cin, kh.diaChi);
          khv.push_back(kh);
          return in;
     }

     friend ostream &operator<<(ostream &out, const KhachHang &kh)
     {
          out << kh.ten << " " << kh.diaChi << " ";
          return out;
     }
};

class MatHang;

vector<MatHang> mhv;

class MatHang
{
private:
     string maMH, tenMH, donVi;
     long long giaMua, giaBan;

public:
     MatHang()
     {
          maMH = tenMH = donVi = "";
          giaMua = giaBan = 0;
     }

     friend istream &operator>>(istream &in, MatHang &mh)
     {
          mMH++;
          mh.maMH = "MH";
          for (int i = 0; i < 3 - to_string(mMH).size(); i++)
          {
               mh.maMH += "0";
          }
          mh.maMH += to_string(mMH);
          cin.ignore();
          getline(cin, mh.tenMH);
          cin >> mh.donVi;
          cin >> mh.giaMua;
          cin >> mh.giaBan;
          mhv.push_back(mh);
          return in;
     }

     friend ostream &operator<<(ostream &out, const MatHang &mh)
     {

          out << mh.tenMH << " ";
          return out;
     }

     long long getGiaBan()
     {
          return giaBan;
     }

     long long getGiaMua()
     {
          return giaMua;
     }
};

class HoaDon
{
private:
     string maHD, maKH, maMH;
     long long soLuong;
     long long loiNhuan;

public:
     HoaDon()
     {
          maHD = maKH = maMH = "";
          soLuong = loiNhuan = 0;
     }

     friend istream &operator>>(istream &in, HoaDon &hd)
     {
          mHD++;
          hd.maHD = "HD";
          for (int i = 0; i < 3 - to_string(mHD).size(); i++)
          {
               hd.maHD += "0";
          }
          hd.maHD += to_string(mHD);
          in >> hd.maKH;
          in >> hd.maMH;
          in >> hd.soLuong;
          int n = stoi(hd.maMH.substr(3));
          int m = stoi(hd.maMH.substr(3));
          long long temp = hd.soLuong * mhv[m - 1].getGiaBan();
          hd.loiNhuan = temp - hd.soLuong * mhv[m - 1].getGiaMua();
          return in;
     }

     friend ostream &operator<<(ostream &out, const HoaDon &hd)
     {

          out << hd.maHD << " ";
          int nKh = stoi(hd.maKH.substr(3));
          int nMh = stoi(hd.maMH.substr(3));
          out << khv[nKh - 1];
          out << mhv[nMh - 1];
          long long temp = hd.soLuong * mhv[nMh - 1].getGiaBan();
          out << hd.soLuong << " " << temp << " " << hd.loiNhuan << "\n";
          return out;
     }

     long long getLoiNhuan()
     {
          return loiNhuan;
     }

     string getMa()
     {
          return maHD;
     }
};

void sapxep(HoaDon *dshd, int k)
{
     for (int i = 0; i < k - 1; i++)
     {
          for (int j = i + 1; j < k; j++)
          {
               if (dshd[i].getLoiNhuan() == dshd[j].getLoiNhuan())
               {
                    if (dshd[i].getMa() > dshd[j].getMa())
                    {
                         HoaDon t;
                         t = dshd[i];
                         dshd[i] = dshd[j];
                         dshd[j] = t;
                    }
               }
               else if (dshd[i].getLoiNhuan() < dshd[j].getLoiNhuan())
               {
                    HoaDon t;
                    t = dshd[i];
                    dshd[i] = dshd[j];
                    dshd[j] = t;
               }
          }
     }
}

int main()
{
     KhachHang dskh[25];
     MatHang dsmh[45];
     HoaDon dshd[105];
     int N, M, K, i;
     cin >> N;
     for (i = 0; i < N; i++)
          cin >> dskh[i];
     cin >> M;
     for (i = 0; i < M; i++)
          cin >> dsmh[i];
     cin >> K;
     for (i = 0; i < K; i++)
          cin >> dshd[i];

     sapxep(dshd, K);

     for (i = 0; i < K; i++)
          cout << dshd[i];
     return 0;
}