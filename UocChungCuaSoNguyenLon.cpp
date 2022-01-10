#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll gcd(ll a, ll  b) {
    while (b > 0) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;

}
ll reduceB(ll a, string n) {
    ll mod = 0;
    for (int i = 0; i < n.length(); i++)
        mod = (mod * 10 + n[i] - '0') % a;
    return gcd(a, mod);
}
int main() {
    int t;
    ll a;
    cin >> t;
    string b;
    while (t--) {
        cin >> a >> b;
        cout << reduceB(a, b) << endl;
    }
}

