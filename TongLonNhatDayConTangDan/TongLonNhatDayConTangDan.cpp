#include<bits/stdc++.h>

typedef long long int ll;
using namespace std;

ll max(ll a, ll b) {
    return a > b ? a : b;
}

int main() {
    int t, n, * arr, * dp;
    ll a;
    cin >> t;
    string b;
    while (t--) {
        cin >> n;
        ll res = 0;
        arr = new int[n];
        dp = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++) {
            dp[i] = arr[i];
            for (int j = 0; j < i; j++)
                if (arr[i] > arr[j])
                    dp[i] = max(dp[i], dp[j] + arr[i]);
            res = max(res, dp[i]);

        }
        cout << res << endl;
        delete[]arr;
        delete[]dp;
    }
}

