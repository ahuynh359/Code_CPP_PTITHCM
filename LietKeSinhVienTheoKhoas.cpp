#include<iostream>
#include<string>

using namespace std;

class SinhVien {
public:
    string maSV, hoTen, lop, email;
};

void Nhap(SinhVien* sv, int n) {
    for (int i = 0; i < n; i++) {
        cin >> sv[i].maSV;
        cin.ignore();
        getline(cin, sv[i].hoTen);
        cin >> sv[i].lop;
        cin >> sv[i].email;

    }

}

void In(SinhVien* sv, int n, const string& nam) {
    for (int i = 0; i < n; i++) {
        if (sv[i].lop.find(nam.substr(2, 2)) != -1)
            cout << sv[i].maSV << " " << sv[i].hoTen << " " << sv[i].lop << " " << sv[i].email << endl;
    }
}

int main() {
    int n;
    int soTruyVan;
    string nam;
    SinhVien* sv;
    cin >> n;
    sv = new SinhVien[n];
    Nhap(sv, n);
    cin >> soTruyVan;
    for (int i = 0; i < soTruyVan; i++) {
        cin >> nam;
        cout << "DANH SACH SINH VIEN KHOA " << nam << ":" << endl;
        In(sv, n, nam);


    }

    delete[]sv;

}