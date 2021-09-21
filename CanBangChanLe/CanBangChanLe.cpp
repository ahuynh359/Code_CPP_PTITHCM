#include<iostream>
#include <string>
#include<iomanip>
#include<math.h>

using namespace std;

bool KT(int n) {
    int chan = 0, le = 0;
    while (n > 0) {
        int tam = n % 10;
        if (tam % 2 == 0)
            chan++;
        else
            le++;
        n /= 10;

    }
    return (chan == le);
}

int main() {
    int n;
    cin >> n;
    int dem = 0;
    for (int i = pow(10, n - 1); i < pow(10, n); i++) {
        if (dem == 10) {
            dem = 0;
            cout << endl;
        }
        if (KT(i)) {
            cout << i << " ";
            dem++;
        }
    }
}