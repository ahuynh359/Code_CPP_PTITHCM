#include<iostream>
#include <string>
#include <iomanip>
using namespace std;

struct ThiSinh {
    string hoTen, ngaySinh;
    float diem1, diem2, diem3;
};
void nhap(ThiSinh& a) {
    getline(cin, a.hoTen);
    getline(cin, a.ngaySinh);

    cin >> a.diem1;
    cin >> a.diem2;
    cin >> a.diem3;

}

void in(ThiSinh a) {
    cout << a.hoTen << " ";
    cout << a.ngaySinh << " ";
    cout << setprecision(1) << fixed;
    cout << float(a.diem1 + a.diem2 + a.diem3);
}
int main() {
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}