#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {


    int t, n, x;
    vector<ll> res;

    cin >> t;
    while (t--) {
        cin >> n;
        int k = 0;
        int l = n - 1;
        ll ans = 0;
        res.resize(n, 0);

        for (int i = 0; i < n; i++) {
            cin >> x;
            res[i] = x;
        }

        while (k <= l) {
            if (res[k] == res[l]) {
                k++;
                l--;
            }
            else if (res[k] > res[l]) {
                l--;
                res[l] += res[l + 1];
                ans++;
            }
            else {
                k++;
                res[k] += res[k - 1];
                ans++;
            }
        }
        cout << ans << '\n';
    }


}