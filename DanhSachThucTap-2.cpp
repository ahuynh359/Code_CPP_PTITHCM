#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>

using namespace std;

struct SinhVien {
    int stt;
    string maSV, hoTen, lop, email, doanhNghiep;
};

bool check(SinhVien sv1, SinhVien sv2) {
    return sv1.maSV < sv2.maSV;
}

int main() {
    int n, t;
    cin >> n;
    cin.ignore();

    SinhVien* sv;
    sv = new SinhVien[n];
    vector<SinhVien> temp;
    for (int i = 0; i < n; i++) {
        sv[i].stt = i + 1;
        getline(cin, sv[i].maSV);
        getline(cin, sv[i].hoTen);
        getline(cin, sv[i].lop);
        getline(cin, sv[i].email);
        getline(cin, sv[i].doanhNghiep);
    }


    cin >> t;
    cin.ignore();
    auto* dn = new string[t];
    for (int i = 0; i < t; i++)
        getline(cin, dn[i]);

    for (int i = 0; i < t; i++) {
        temp.clear();
        for (int j = 0; j < n; j++)
            if (sv[j].doanhNghiep == dn[i])
                temp.push_back(sv[j]);

        sort(temp.begin(), temp.end(), check);
        for (auto it : temp)
            cout << it.stt << " " << it.maSV << " " << it.hoTen << " " << it.lop << " " << it.email << " "
            << it.doanhNghiep << endl;

    }


}