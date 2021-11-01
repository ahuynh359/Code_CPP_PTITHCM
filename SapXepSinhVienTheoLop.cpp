#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

class SinhVien {
    string maSV, hoTen, lop, email;
public:
    void nhap() {
        cin >> maSV;
        cin.ignore();
        getline(cin, hoTen);
        cin >> lop;
        cin >> email;
    }

    string getLop() {
        return lop;
    }
    string getMa() {
        return maSV;
    }

    void xuat() {
        cout << maSV << " " << hoTen << " " << lop << " " << email << endl;
    }

};

bool check(SinhVien sv1, SinhVien sv2) {
    if (sv1.getLop() != sv2.getLop())
        return sv1.getLop() < sv2.getLop();
    return sv1.getMa() < sv2.getMa();
}

void sapXep(SinhVien* sv, const int& n) {
    sort(sv, sv + n, check);
}


int main() {
    int n;
    SinhVien* sv;
    cin >> n;
    sv = new SinhVien[n];


    for (int i = 0; i < n; i++) {
        sv[i].nhap();
    }
    sapXep(sv, n);
    for (int i = 0; i < n; i++)
        sv[i].xuat();


    delete[]sv;
}