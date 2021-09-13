#include<iostream>
#include <math.h>

using namespace std;

bool SNT(int n) {
    if (n < 2)
        return false;
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

bool chiaHet(int n) {
    int s = 0;
    while (n > 0) {
        s = s + n % 10;
        n /= 10;
    }
    if (s % 5 == 0)
        return true;
    return false;
}


int main() {

    int n, dem = 0;
    cin >> n;
    for (int i = 2; i < n; i++) {
        if (SNT(i) && chiaHet(i)) {
            cout << i << " ";
            dem++;
        }

    }
    cout << endl;
    cout << dem;


}
