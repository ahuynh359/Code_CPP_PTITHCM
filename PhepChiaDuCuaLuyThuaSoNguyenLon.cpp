#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll calPow(ll a, ll b, ll m) {
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    ll res = calPow(a, b / 2, m);
    if (b & 1)
        return a * (res % m * res % m) % m;
    return (res * res) % m;
}

ll solve(string a, ll b, ll m) {
    ll resA = 0;
    for (int i = 0; i < a.size();i++)
        resA = (resA * 10 + a[i] - '0') % m;

    return calPow(resA, b, m);
}
int main() {

    int t;
    string a;
    ll m,b;

    cin >> t;
    while (t--) {
        cin >> a >> b >> m;
        cout << solve(a, b, m)<<'\n';

    }




}