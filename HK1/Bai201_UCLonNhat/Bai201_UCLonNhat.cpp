#include <iostream>
#include <math.h>
using namespace std;
long long int uocNguyenTo(long long int n) {
    long long int so = 0;
    if (n <= 1)
        return n;
    while (n % 2 == 0) {
        so = 2;
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            so = i;
            n /= i;
        }
    }

    if (n > 2)
        so = n;
    return so;

}
int main() {
    int soBoTest;
    long long int n;
    cin >> soBoTest;
    for (int k = 0; k < soBoTest; k++) {
        cin >> n;
        cout << uocNguyenTo(n) << endl;
    }
}