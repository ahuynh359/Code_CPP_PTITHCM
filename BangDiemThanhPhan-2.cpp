#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

struct BangDiem {
    string maSV, ten, lop;
    float diem1{}, diem2{}, diem3{};

};

bool check(BangDiem& bd1, BangDiem& bd2) {
    return bd1.ten < bd2.ten;
}

int main() {
    int n;
    cin >> n;
    auto* bd = new BangDiem[n];
    cin.ignore();

    for (int i = 0; i < n; i++) {
        getline(cin, bd[i].maSV); 
        getline(cin, bd[i].ten);
        getline(cin, bd[i].lop);
        cin >> bd[i].diem1 >> bd[i].diem2 >> bd[i].diem3;
        cin.ignore();

    }
    sort(bd, bd + n, check);
    for (int i = 0; i < n; i++) {
        cout << setprecision(1) << fixed;
        cout << i + 1 << " " << bd[i].maSV << " " << bd[i].ten << " " << bd[i].lop << " " << bd[i].diem1 << " "
            << bd[i].diem2 << " " << bd[i].diem3 << endl;
    }

    delete[]bd;

    return 0;
}
