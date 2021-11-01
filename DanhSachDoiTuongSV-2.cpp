#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>

using namespace std;
string chuanHoaTen(string kq) {
    while (kq[0] == ' ')
        kq.erase(0, 1);
    while (kq[kq.length() - 1] == ' ')
        kq.erase(kq.length() - 1, 1);
    for (int i = 1; i < kq.length() - 1; i++) {
        if (kq[i] == ' ' && kq[i + 1] == ' ') {
            kq.erase(i, 1);
            i--;
        }

    }
    string s = kq;
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
    else {
        for (int i = 1; i < s.length(); i++)
            s[i] = tolower(s[i]);
    }
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

    friend ostream& operator<<(ostream& output, SinhVien& sv) {
        output << setprecision(2) << fixed;

        output << sv.getMaSV() << " " << sv.hoTen << " " << sv.lop << " " << sv.ngaySinh << " " << sv.diem << endl;
        return output;
    }

    friend istream& operator>>(istream& input, SinhVien& sv) {
        cin.ignore();
        getline(cin, sv.hoTen);
        sv.hoTen = chuanHoaTen(sv.hoTen);
        cin >> sv.lop;
        cin >> sv.ngaySinh;
        if (sv.ngaySinh[2] != '/')
            sv.ngaySinh.insert(0, "0");
        if (sv.ngaySinh[5] != '/')
            sv.ngaySinh.insert(3, "0");
        cin >> sv.diem;
        return input;
    }
};


unsigned int SinhVien::so = 0;


int main() {
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++) {
        cin >> ds[i];
    }
    for (i = 0; i < N; i++) {
        cout << ds[i];
    }
    return 0;
}