#include<iostream>
#include<string>
#include<iomanip>

#define a() a
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


    friend ostream& operator<<(ostream& output, const SinhVien& sv) {
        output << "B20DCCN001 ";
        output << chuanHoaTen(sv.hoTen) << " ";
        output << sv.lop << " ";
        output << sv.ngaySinh << " ";
        output << setprecision(2) << fixed << sv.diemGPA;
        return output;

    }

    friend istream& operator>>(istream& input, SinhVien& sv) {
        getline(cin, sv.hoTen);
        getline(cin, sv.lop);
        getline(cin, sv.ngaySinh);
        if (sv.ngaySinh[1] == '/')
            sv.ngaySinh.insert(0, "0");
        if (sv.ngaySinh[4] == '/')
            sv.ngaySinh.insert(3, "0");
        cin >> sv.diemGPA;
        cin.ignore();
        return input;
    }


};

int main() {

    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}