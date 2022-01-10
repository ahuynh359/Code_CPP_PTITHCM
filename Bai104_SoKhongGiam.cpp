#include<iostream>
using namespace std;
bool soKhongGiam(int n) {
    int soCuoi;
    while (n > 0) {
        soCuoi = n % 10;
        n /= 10;
        if (soCuoi < n % 10 || (soCuoi < n && n % 10 == 0))
            return false;
    }
    return true;
}
int main() {
    int soBoTest;
    cin >> soBoTest;
    int n;
    int dau, cuoi;
    for (int k = 0; k < soBoTest; k++) {
        dau = 1;
        cin >> n;
        for (int i = 0; i < n - 1; i++)
            dau *= 10;
        cuoi = dau * 10;
        for (int i = dau; i < cuoi; i++)
            if (soKhongGiam(i))
                cout << i << " ";
        cout << endl;
    }


    return 0;
}