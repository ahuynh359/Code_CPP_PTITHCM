#include <bits/stdc++.h>

using namespace std;

int main()
{

    int m, n, x;
    map<int, int> res;
    ifstream in("DATA.in");
    in >> m >> n;
    for (int i = 0; i < m; i++)
    {
        in >> x;
        res[x]++;
    }
    for (int i = 0; i < n; i++)
    {
        in >> x;
        auto it = res.find(x);
        if (it != res.end())

            res[x] = 0;
    }
    for (auto &it : res)
        if (it.second == 0)
            cout << it.first << " ";
}