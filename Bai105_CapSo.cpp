#include<iostream>
#include<math.h>

using namespace std;


long long int UCLN(long long int a, long long int b) {
    long long int r;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int soBoTest;
    cin >> soBoTest;
    long long int a, b, c, d;
    int dem = 0;
    for (int i = 0; i < soBoTest; i++) {
        cin >> a >> b >> c >> d;
        if (UCLN(a, b) == UCLN(c, d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

}