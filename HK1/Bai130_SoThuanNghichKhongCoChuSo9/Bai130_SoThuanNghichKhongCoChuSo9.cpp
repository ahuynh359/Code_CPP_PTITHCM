#include<iostream>
using namespace std;

bool soThuanNghich(int n) {

    int so = 0, kq = n;
    if (n == 9)
        return false;
    int tong = 0;
    while (n > 0) {
        if (so % 10 == 9)
            return false;
        so = so * 10 + n % 10;

        n /= 10;
    }

    if (kq != so)
        return false;
    return true;
}


int main() {

    int  b;

    int dem = 0;
    cin >> b;
    for (int i = 2; i < b; i++)
        if (soThuanNghich(i)) {
            cout << i << " ";
            dem++;
        }
    cout << endl << dem;


    return 0;
}