#include <iostream>
#include <string>
#include<algorithm>

using namespace std;


class NhanVien {
    static int dem;
    string maNV, hoTen, gioiTinh, ngaySinh, maSoThue, ngayHopDong, diaChi;

public:
    friend ostream& operator<<(ostream& output, const NhanVien& nv) {
        output << nv.maNV << " " << nv.hoTen << " " << nv.gioiTinh << " " << nv.ngaySinh << " " << nv.diaChi << " "
            << nv.maSoThue << " " << nv.ngayHopDong << endl;
        return output;
    }

    friend istream& operator>>(istream& input, NhanVien& nv) {
        cin.ignore();
        getline(input, nv.hoTen);
        cin >> nv.gioiTinh;
        cin >> nv.ngaySinh;
        cin.ignore();
        getline(cin, nv.diaChi);
        cin >> nv.maSoThue;
        cin >> nv.ngayHopDong;
        return input;
    }

    string getNgaySinh() {
        return ngaySinh;
    }

    NhanVien() {
        dem++;
        for (int i = 0; i < 5 - to_string(dem).length(); i++)
            maNV += "0";
        maNV += to_string(dem);
    }
};

int NhanVien::dem = 0;

bool check(NhanVien& nv1, NhanVien& nv2) {
    string s1, s2;
    s1 = nv1.getNgaySinh().substr(6, 4);
    s2 = nv2.getNgaySinh().substr(6, 4);

    if (s1 != s2)
        return s1 < s2;
    s1 = nv1.getNgaySinh().substr(0, 2);
    s2 = nv2.getNgaySinh().substr(0, 2);


    if (s1 != s2)
        return s1 < s2;
    s1 = nv1.getNgaySinh().substr(3, 2);
    s2 = nv2.getNgaySinh().substr(3, 2);


    return s1 < s2;
}

void sapxep(NhanVien* nv, int n) {
    sort(nv, nv + n, check);
}

int main() {
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++) cout << ds[i];
    return 0;
}