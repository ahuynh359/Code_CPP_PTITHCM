#include <iostream>
#include <math.h>

using namespace std;

bool KT(int n) {
    if (n < 2)
        return false;
    int dem = 0;

    if (n % 2 == 0) {
        n /= 2;
        dem++;
    }
    if (n % 2 == 0) {
        return false;
    }


    for (int i = 3; i <= sqrt(n); i += 2) {

        if (n % i == 0) {
            n /= i;
            dem++;
        }
        if (n % i == 0) {
            return false;
        }


    }
    if (n > 2)
        dem++;
    return dem == 3;

}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << KT(n) << endl;
    }

}