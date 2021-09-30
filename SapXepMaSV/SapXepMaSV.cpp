#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

class SinhVien {
public:
    string maSV, hoTen, lop, email;
};

void Nhap(vector<SinhVien>& sv) {
    struct SinhVien sv1;
    while (cin >> sv1.maSV, cin.ignore(), getline(cin, sv1.hoTen), cin >> sv1.lop >> sv1.email) {
        sv.push_back(sv1);

    }

}

void In(const vector<SinhVien>& sv) {
    for (int i = 0; i < sv.size(); i++) {
        cout << sv[i].maSV << " " << sv[i].hoTen << " " << sv[i].lop << " " << sv[i].email << endl;
    }
}

bool key(const SinhVien& sv1, const SinhVien& sv2) {
    return sv1.maSV < sv2.maSV;
}

int main() {

    vector<SinhVien> sv;
    Nhap(sv);
    sort(sv.begin(), sv.end(), key);
    In(sv);


}