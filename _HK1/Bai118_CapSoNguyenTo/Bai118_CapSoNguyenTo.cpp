#include<iostream>
using namespace std;
bool SNT(int n) {
    if (n < 2)
        return false;
    if (n == 3 || n == 2 || n == 5 || n == 7)
        return true;
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int main() {
    int soBoTest, n;
    cin >> soBoTest;

    for (int k = 0; k < soBoTest; k++) {
        cin >> n;
        for (int i = 2; i <= n / 2; i++) {
            if (SNT(i) && SNT(n - i)) {
                cout << i << " " << n - i << " ";
            }

        }

        cout << endl;
    }

    return 0;
}