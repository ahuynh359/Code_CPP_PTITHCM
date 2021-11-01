#include<iostream>
#include <string>
#include<algorithm>
#include<iomanip>
using namespace std;

struct MatHang {
    string ma, ten, nhom;
    float giaMua{}, giaBan{};
};

bool check(const MatHang& mh1, const MatHang& mh2) {
    return (mh1.giaBan - mh1.giaMua) > (mh2.giaBan - mh2.giaMua);
}

void nhap(MatHang* mh, int n) {
    for (int i = 0; i < n; i++) {
        mh[i].ma = to_string(i + 1);
        cin.ignore();
        getline(cin, mh[i].ten);
        getline(cin, mh[i].nhom);
        cin >> mh[i].giaMua;
        cin >> mh[i].giaBan;
    }
}

void xuat(MatHang* mh, int n) {
    for (int i = 0; i < n; i++) {
        cout << setprecision(2) << fixed;
        cout << mh[i].ma << " " << mh[i].ten << " " << mh[i].nhom << " " << mh[i].giaBan - mh[i].giaMua << "\n";
    }
}
int main() {
    int n;
    cin >> n;
    auto* mh = new MatHang[n];
    nhap(mh, n);
    sort(mh, mh + n, check);
    xuat(mh, n);
}