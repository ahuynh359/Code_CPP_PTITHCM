
#include<string>
#include <iostream>
#include<algorithm>
using namespace std;

struct NhanVien {
    string maNV, hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKyHopDong;
    static int dem;
    NhanVien() {
        dem++;
        for (int i = 0; i < 5 - to_string(dem).length(); i++) {
            maNV += "0";
        }
        maNV += to_string(dem);
    }

    friend  ostream& operator<<(ostream& output, const NhanVien& nv) {
        output << nv.maNV << " " << nv.hoTen << " " << nv.gioiTinh << " " << nv.ngaySinh << " " << nv.diaChi << " " << nv.maSoThue << " " << nv.ngayKyHopDong << endl;

        return output;
    }
    friend  istream& operator>>(istream& input, NhanVien& nv) {
        input.ignore();
        getline(input, nv.hoTen);
        input >> nv.gioiTinh >> nv.ngaySinh;
        input.ignore();
        getline(input, nv.diaChi);
        input >> nv.maSoThue >> nv.ngayKyHopDong;

        return input;

    }
};

int NhanVien::dem = 0;
int main() {
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) cin >> ds[i];
    for (i = 0; i < N; i++) cout << ds[i];
    return 0;
}