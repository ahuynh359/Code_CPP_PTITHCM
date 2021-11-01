#include<iostream>
#include<math.h>

using namespace std;

long long int gcd(long long int a, long long  int b) {
    while (b > 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

bool SNT(long long int a) {
    if (a < 2)
        return false;
    for (int i = 2; i <= sqrt(a); i++)
        if (a % i == 0)
            return false;
    return true;
}

int main() {
    int t, x;
    long long int* arr;
    cin >> t;
    while (t--) {
        cin >> x;
        long long int dem = 0;

        for (int i = 1; i <= x; i++) {
            if (gcd(x, i) == 1)
                dem++;
        }
        if (SNT(dem))
            cout << 1;
        else
            cout << 0;
        cout << '\n';



    }

}