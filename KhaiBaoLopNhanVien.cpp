#include<iostream>
using namespace std;
#define a() a
class NhanVien {
    string maSV, hoTen, ngaySinh, gioiTinh, diaChi, maSoThue, ngayKiHopDong;



    friend ostream& operator<<(ostream& output, const NhanVien& nv) {
        output << "00001 ";
        output << nv.hoTen << " ";
        output << nv.gioiTinh << " ";
        output << nv.ngaySinh << " ";
        output << nv.diaChi << " ";
        output << nv.maSoThue << " ";
        output << nv.ngayKiHopDong;
        return output;

    }

    friend istream& operator>>(istream& input, NhanVien& nv) {
        getline(cin, nv.hoTen);
        getline(cin, nv.gioiTinh);
        getline(cin, nv.ngaySinh);
        getline(cin, nv.diaChi);
        getline(cin, nv.maSoThue);
        getline(cin, nv.ngayKiHopDong);
        return input;
    }


};


int main() {
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}