#include<iostream>
#include<math.h>
using namespace std;

void phanTichSo(long long int n) {
    cout << n << " " << "=" << " ";
    int dem = 0;
    bool KT = false;
    if (n <= 1) {
        cout << n << "^" << 1;
        return;
    }
    while (n % 2 == 0) {
        dem++;
        KT = true;
        n /= 2;
    }

    if (KT) {
        if (n == 1)
            cout << 2 << "^" << dem;
        else
            cout << 2 << "^" << dem << " " << "*" << " ";

    }


    for (int i = 3; i <= sqrt(n); i += 2) {
        dem = 0;
        KT = false;
        if (n % i == 0) {
            while (n % i == 0) {
                dem++;
                KT = true;
                n /= i;
            }
        }

        if (KT) {
            if (n == 1)
                cout << i << "^" << dem;
            else
                cout << i << "^" << dem << " " << "*" << " ";

        }



    }

    if (n > 2)
        cout << n << "^" << 1;

    cout << endl;
}

int main() {
    long long int n;
    int soBotest;
    cin >> soBotest;
    for (int i = 0; i < soBotest; i++) {
        cin >> n;
        phanTichSo(n);
    }

    return 0;
}
