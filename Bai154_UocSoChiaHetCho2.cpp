#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int soBoTest;
    cin >> soBoTest;
    long long int n;
    int dem = 0;
    for (int k = 0; k < soBoTest; k++) {
        dem = 0;
        cin >> n;
        long long int i;
        for (i = 1; i <= sqrt(n); i++) {
            if (n % i == 0 && i % 2 == 0)
                dem++;
            if (n % (n / i) == 0 && (n / i) % 2 == 0)
                dem++;
        }

        i--;
        if (i * i == n)
            dem--;

        if (dem == -1)
            cout << 0 << endl;
        else
            cout << dem << endl;
    }
    return 0;
}