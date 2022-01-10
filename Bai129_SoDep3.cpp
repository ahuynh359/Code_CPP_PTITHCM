#include <iostream>

using namespace std;

bool soDep(long long int n) {
    if (n < 161)
        return false;
    long long int kq = n, s = 0;
    int tong = 0;
    bool kt = false;
    while (n > 0) {
        s = s * 10 + n % 10;
        if (n % 10 == 6)
            kt = true;
        tong += n % 10;
        n /= 10;
    }
    if (kt == false || (tong % 10 != 8) || kq != s)
        return false;
    return true;
}

int main() {
    long long int a, b;
    cin >> a >> b;
    if (a > b) {
        long long int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++)
        if (soDep(i))
            cout << i;


    return 0;
}