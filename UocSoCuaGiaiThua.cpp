#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, p;
    int res = 0;
    cin >> t;
    while (t--)
    {
        res = 0;
        cin >> n >> p;
        while (n)
        {
            n /= p;
            res += n;
        }
        cout << res << '\n';
    }
}