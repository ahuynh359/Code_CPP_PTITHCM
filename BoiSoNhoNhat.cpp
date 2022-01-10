#include<iostream>
using namespace std;

long long int gcd(long long int a, long long int b) {
    while (b > 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long int lcd(long long int a, long long int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int t;
    int n, m;
    cin >> t;
    long long int ans;
    while (t--) {
        cin >> n >> m;
        ans = n;
        for (int i = n + 1; i <= m; i++) {
            ans = lcd(ans, i);

        }

        cout << ans << endl;

    }

    return 0;
}
