#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll gcd(ll a, ll b)
{
    while (b != 0)
    {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll _pow(ll a, ll b)
{

    if (b == 1)
        return a;

    if (b % 2 != 0)
        return _pow(a, b - 1) * a % MOD;
    return _pow(a, b / 2) * _pow(a, b / 2) % MOD;
}

int main()
{

    int t, n;
    vector<ll> arr;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll GCD = 1;
        ll p = 1;
        arr.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i == 0)
                GCD = arr[0];
            else
                GCD = gcd(GCD, arr[i]);
            p *= arr[i];
            p %= MOD;
        }

        ll y = _pow(p, GCD);
        cout << y << '\n';
    }
}