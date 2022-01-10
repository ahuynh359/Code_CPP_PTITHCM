#include<iostream>
using namespace std;

bool soThuanNguyenTo(long long int n) {
    if (n < 2)
        return false;
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

bool KtSNT(long long int n) {
    while (n > 0) {
        if (!soThuanNguyenTo(n % 10))
            return false;
        n /= 10;
    }
    return true;
}
int tong(long long int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}
int main() {
    long long int dem;
    int t;
    cin >> t;
    long long int a, b;
    while (t--) {

        dem = 0;
        cin >> a >> b;
        if (a > b) {
            long long int temp = a;
            a = b;
            b = temp;
        }

        for (long long int i = a; i <= b; i++)
            if (KtSNT(i) && soThuanNguyenTo(i) && soThuanNguyenTo(tong(i)))
                dem++;
        cout << dem << endl;
    }

    return 0;
}