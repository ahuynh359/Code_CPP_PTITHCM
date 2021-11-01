#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

struct SinhVien {
    string maSV, hoTen, lop, ngaySinh;
    float diem;
    static unsigned int so;

    SinhVien() {
        maSV = "";
        hoTen = "";
        lop = "";
        ngaySinh = "";
        diem = 0;
    }

    string getMaSV() {
        so++;
        maSV = "B20DCCN";
        for (int i = 0; i < 3 - to_string(so).length(); i++) {
            maSV += "0";
        }
        maSV += to_string(so);
        return maSV;
    }
};

void nhap(SinhVien* sv, int n) {
    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, sv[i].hoTen);
        cin >> sv[i].lop;
        cin >> sv[i].ngaySinh;
        if (sv[i].ngaySinh[2] != '/')
            sv[i].ngaySinh.insert(0, "0");
        if (sv[i].ngaySinh[5] != '/')
            sv[i].ngaySinh.insert(3, "0");
        cin >> sv[i].diem;
    }
}

void in(SinhVien* sv, int n) {
    for (int i = 0; i < n; i++) {
        cout << setprecision(2) << fixed;
        cout << sv[i].getMaSV() << " " << sv[i].hoTen << " " << sv[i].lop << " " << sv[i].ngaySinh << " " << sv[i].diem << endl;
    }
}

unsigned int SinhVien::so = 0;

int main() {
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}