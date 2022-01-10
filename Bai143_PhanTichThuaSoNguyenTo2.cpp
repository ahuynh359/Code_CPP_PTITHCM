#include<iostream>
using namespace std;

void phanTich(int n) {
    if (n < 4) {
        cout << n << endl;
        return;
    }
    while (n % 2 == 0) {
        n /= 2;
        if (n == 1)
            cout << 2;
        else
            cout << 2 << "x";

    }

    for (int i = 3; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
                if (n == 1)
                    cout << i;
                else
                    cout << i<<"x";

            }
        }
    }

    if (n > 2)
        cout << n;
    cout << endl;
}


int main() {
    int n;
    cin >> n;
    phanTich(n);
    return 0;
}