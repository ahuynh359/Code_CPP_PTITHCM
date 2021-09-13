#include<iostream>
#include<math.h>
using namespace std;
long long int tongChuSo(long long int n) {
    long long int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

long long int tongThuaSo(long long int n) {
    long long int s = 0;
    while (n % 2 == 0) {
        s += 2;
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0) {
            while (n % i == 0) {
                s += tongChuSo(i);

                n /= i;
            }

        }

    if (n > 2) {
        s += tongChuSo(n);
    }

    return s;

}

int main() {
    long long int n;
    cin >> n;
    if (tongChuSo(n) == tongThuaSo(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
