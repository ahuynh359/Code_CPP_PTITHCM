#include<iostream>
#include <math.h>

using namespace std;

void phanTichThuaSo(long long int n, int test) {
    int dem = 0;
    cout << "Test " << test << ": ";
    if (n < 2)
        cout << n << "(" << 1 << ") ";
    while (n % 2 == 0) {
        dem++;
        n /= 2;
    }
    if (dem > 0)
        cout << 2 << "(" << dem << ") ";
    int i;
    for (i = 3; i <= trunc(sqrt(n)); i += 2) {
        dem = 0;
        while (n % i == 0) {
            dem++;
            n /= i;

        }
        if (dem > 0)
            cout << i << "(" << dem << ") ";

    }
    if (n > 2)
        cout << n << "(" << 1 << ") ";
    printf("\n");

}
int main() {
    int soBoTest;
    long long int n;
    cin >> soBoTest;

    for (int k = 0; k < soBoTest; k++) {
        cin >> n;
        phanTichThuaSo(n, k + 1);
    }

}
