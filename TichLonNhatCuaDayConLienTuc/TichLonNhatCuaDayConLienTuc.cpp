#include<iostream>
#include<vector>

using namespace std;
using ll = long long;
ll MIN = -1e18;

ll max(ll a, ll b) {
    return a > b ? a : b;
}

int main() {


    int t, n, * arr;
    ll p, res;


    cin >> t;
    while (t--) {
        cin >> n;
        p = 1;
        res = MIN;
        arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++) {
            p = 1;
            for (int j = i; j < n; j++) {
                p *= arr[j];
                res = max(res, p);
            }
        }

        cout << res << '\n';


    }
}

