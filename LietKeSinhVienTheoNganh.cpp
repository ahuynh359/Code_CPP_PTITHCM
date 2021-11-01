#include<iostream>
#include<math.h>
#include <string>

using namespace std;

struct SinhVien {
    string maSV, hoTen, lop, email;
};

int main() {
    int n;
    cin >> n;
    auto* sv = new SinhVien[n];

    for (int i = 0; i < n; i++) {
        cin >> sv[i].maSV;
        cin.ignore();
        getline(cin, sv[i].hoTen);
        cin >> sv[i].lop >> sv[i].email;
    }

    int q;
    cin >> q;
    string truyVan;
    string tam;
    cin.ignore();
    for (int i = 0; i < q; i++) {
        getline(cin, truyVan);
        for (int i = 0; i < truyVan.length(); i++)
            truyVan[i] = toupper(truyVan[i]);
        cout << "DANH SACH SINH VIEN NGANH " << truyVan << ":" << endl;
        if (truyVan == "KE TOAN")
            tam = "KT";
        else if (truyVan == "CONG NGHE THONG TIN")
            tam = "CN";
        else if (truyVan == "AN TOAN THONG TIN")
            tam = "AT";
        else if (truyVan == "VIEN THONG")
            tam = "VT";
        else if (truyVan == "DIEN TU")
            tam = "DT";

        for (int j = 0; j < n; j++) {


            if (sv[j].maSV.substr(5, 2) == tam) {
                if (tam == "AT" || tam == "CN") {
                    if (sv[j].lop[0] != 'E')
                        cout << sv[j].maSV << " " << sv[j].hoTen << " " << sv[j].lop << " " << sv[j].email << endl;


                }
                else
                    cout << sv[j].maSV << " " << sv[j].hoTen << " " << sv[j].lop << " " << sv[j].email << endl;
            }
        }
    }


    return 0;
}
