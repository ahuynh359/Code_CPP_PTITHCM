#include<iostream>
#include<string>
#include<iomanip>
#define a() a
using namespace std;

class SinhVien {
public:


    string maSV, hoTen, lop, ngaySinh;
    float diemGPA;

    SinhVien() {
        hoTen = "";
        lop = "";
        ngaySinh = "";
        diemGPA = 0;
    }

};

void nhap(SinhVien& sv) {
    getline(cin, sv.hoTen);
    getline(cin, sv.lop);
    getline(cin, sv.ngaySinh);
    if (sv.ngaySinh[1] == '/')
        sv.ngaySinh.insert(0, "0");
    if (sv.ngaySinh[4] == '/')
        sv.ngaySinh.insert(3, "0");
    cin >> sv.diemGPA;
    cin.ignore();

}

void in(SinhVien& sv) {
    cout << "B20DCCN001 ";
    cout << "Nguyen Van A ";
    cout << sv.lop << " ";
    cout << sv.ngaySinh << " ";
    cout << setprecision(2) << fixed << sv.diemGPA;

}

int main() {
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}