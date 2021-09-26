#include <iostream>
#include <string>

using namespace std;

struct SinhVien {
    string hoTen, lop, diem;
}sva;

void nhap(SinhVien* sv, int n) {
    for (int i = 0; i < n; i++) {
        getline(cin, sv[i].hoTen);
        getline(cin, sv[i].lop);
        getline(cin, sv[i].diem);


    }
}

int main() {

    SinhVien sva;
    sva.hoTen = "a";

    return 0;
}