#include<iostream>
#include <string>
#include <iomanip>

using namespace std;

struct SinhVien {
    string maSV, hoTen, lop, ngaySinh;
    float diem;
};

void nhap(SinhVien& a) {
    getline(cin, a.hoTen);
    getline(cin, a.lop);

    getline(cin, a.ngaySinh);

    if (a.ngaySinh[1] == '/')
        a.ngaySinh.insert(0, "0");
    if (a.ngaySinh[4] == '/')
        a.ngaySinh.insert(3, "0");

    cin >> a.diem;
    cin.ignore();

}

void in(const SinhVien& a) {
    cout << "B20DCCN001 ";
    cout << a.hoTen << " ";
    cout << a.lop << " ";
    cout << a.ngaySinh << " ";
    cout << setprecision(2) << fixed;
    cout << float(a.diem);
}

int main() {
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}