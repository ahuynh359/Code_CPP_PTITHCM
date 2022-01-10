

#include <iostream>

using namespace std;
bool kiemTraSTN(long long int n) {
    long long int a = n, b = 0;
    while (n > 0) {
        b = b*10+ (n % 10);
        n /= 10;

    }
    return b == a;
}
int main() {
    int t;
    long long int  n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (kiemTraSTN(n))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}

