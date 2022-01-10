#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;

int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);

     int n, k, b;
     cin >> n >> k >> b;

     vector<bool> check(n + 1, false);
     for (int i = 1; i <= b; i++)
     {
          int x;
          cin >> x;
          check[x] = true;
     }
     int cnt = 0;
     for (int i = 1; i <= k; i++)
     {
          if (check[i])
               cnt++;
     }
     int ans = cnt;
     for (int i = k + 1; i <= n; i++)
     {
          cnt = cnt - check[i - k] + check[i];
          ans = min(ans, cnt);
     }
     cout << ans;
     return 0;
}