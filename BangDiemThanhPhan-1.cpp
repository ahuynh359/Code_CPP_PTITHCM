#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<algorithm>
#include<iomanip>

using namespace std;

struct BangDiem {
    string maSV, ten, lop;
    float diem1, diem2, diem3;

};

bool check(BangDiem& bd1, BangDiem& bd2) {
    return bd1.maSV < bd2.maSV;
}

int main() {
    int n;
    cin >> n;
    BangDiem* bd = new BangDiem[n];

    for (int i = 0; i < n; i++) {
        cin >> bd[i].maSV;
        cin.ignore();
        getline(cin, bd[i].ten);
        cin >> bd[i].lop >> bd[i].diem1 >> bd[i].diem2 >> bd[i].diem3;

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
