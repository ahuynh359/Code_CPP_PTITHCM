#include <bits/stdc++.h>

long long MOD = 10e9 + 7;
using namespace std;
struct Diem
{
    double x, y;
};

int main()
{
    int t, n;
    double res1, res2;
    Diem *d;
    cin >> t;
    while (t--)
    {
        cin >> n;
        res1 = res2 = 0;
        d = new Diem[n + 1];
        for (int i = 0; i < n; i++)
            cin >> d[i].x >> d[i].y;

        d[n] = d[0];

        for (int i = 0; i < n; i++)
            res1 += (d[i].y * d[i + 1].x);
        for (int i = 0; i < n; i++)
            res2 += (d[i].x * d[i + 1].y);
        cout << setprecision(3) << fixed << (0.5 * abs(res1 - res2)) << '\n';
    }
}