#include<iostream>
#include <string>

using namespace std;

struct NhanVien {
    string hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKyHopDong;
};

void nhap(NhanVien& a) {
    getline(cin, a.hoTen);
    getline(cin, a.gioiTinh);
    getline(cin, a.ngaySinh);
    getline(cin, a.diaChi);
    getline(cin, a.maSoThue);
    getline(cin, a.ngayKyHopDong);

}

void in(NhanVien a) {
    cout << "00001 ";
    cout << a.hoTen << " ";
    cout << a.gioiTinh << " ";
    cout << a.ngaySinh << " ";
    cout << a.diaChi << " ";
    cout << a.maSoThue << " ";
    cout << a.ngayKyHopDong;

}

int main() {
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}