#include <bits/stdc++.h>

using namespace std;
int n, m;
vector<vector<int>> arr;
vector<vector<bool>> check;

int X[9] = {-1, 0, 1, -1, 1, -1, 0, 1};
int Y[9] = {-1, -1, -1, 0, 0, 1, 1, 1};

void DFS(int i, int j)
{
    check[i][j] = false;
    for (int k = 0; k < 8; k++)
    {
        int x = i + X[k];
        int y = j + Y[k];
        if (x >= 0 && y >= 0 && x < m && y < n && check[x][y] && arr[x][y] == 1)
            DFS(x, y);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, res;
    cin >> t;
    while (t--)
    {
        res = 0;
        cin >> n >> m;
        arr.clear();
        arr.resize(n, vector<int>(m));
        check.clear();
        check.resize(n, vector<bool>(m, true));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == 1 && check[i][j])
                {
                    res++;
                    DFS(i, j);
                }
            }
        }

        cout << res << '\n';
    }
}