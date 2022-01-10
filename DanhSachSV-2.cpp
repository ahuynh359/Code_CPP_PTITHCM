#include<iostream>
#include<string>
#include<iomanip>

using namespace std;


string  xuLiTen(string s) {

    while (s[0] == ' ')
        s.erase(0, 1);
    while (s[s.length() - 1] == ' ')
        s.erase(s.length() - 1, 1);
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == ' ' && s[i + 1] == ' ') {
            s.erase(i, 1);
            i--;
        }
    }
    s[0] = toupper(s[0]);
    if (s.find(' ') != -1) {
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == ' ') {
                s[i + 1] = toupper(s[i + 1]);
                i++;
            }
            else
                s[i] = tolower(s[i]);

        }
    }
    else
        for (int i = 1; i < s.length(); i++)
            s[i] = tolower(s[i]);

    return s;

}
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
        sv[i].hoTen = xuLiTen(sv[i].hoTen);
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