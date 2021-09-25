#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>

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

    friend ostream& operator<<(ostream& output, SinhVien& sv) {
        output << setprecision(2) << fixed;

        output << sv.getMaSV() << " " << sv.hoTen << " " << sv.lop << " " << sv.ngaySinh << " " << sv.diem << endl;
        return output;
    }

    friend istream& operator>>(istream& input, SinhVien& sv) {
        cin.ignore();
        getline(cin, sv.hoTen);
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