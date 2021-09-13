#include<iostream>
using namespace std;


bool soThuanNghich(long long int n) {
    int tong = 0;
    long long int kq = n, so = 0;
    while (n > 0) {
        so = so * 10 + n % 10;
        tong += n % 10;
        n /= 10;

    }

    if (so != kq || tong % 10 != 0)
        return false;
    return true;

}


int main() {
    int soBoTest;
    int dem;
    int batDau, ketThuc;
    long long int n;
    cin >> soBoTest;

    for (int k = 0; k < soBoTest; k++) {
        dem = 0;
        batDau = 1;
        ketThuc = 1;
        cin >> n;
        for (int i = 0; i < n - 1; i++)
            batDau = batDau * 10;
        ketThuc = batDau * 10;

        for (int i = batDau; i < ketThuc; i++)
            if (soThuanNghich(i))
                dem++;
        cout << dem << endl;
    }


    return 0;
}