#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();

    int t, n, maxSize, res;
    vector<vector<int>> arr;
    vector<int> row, col;
    cin >> t;
    while (t--)
    {
        cin >> n;
        res = 0;
        maxSize = 0;
        arr.clear();
        arr.resize(n, vector<int>(n, 0));
        row.clear();
        row.resize(n, 0);
        col.clear();
        col.resize(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                row[i] += arr[i][j];
                col[j] += arr[i][j];
                maxSize = max(maxSize, col[j]);
                maxSize = max(maxSize, row[i]);
            }
        }

        // Tang 1 don vi = min khoang cach moi hang va cot cua ele
        for (int i = 0, j = 0; i < n && j < n;)
        {
            int dif = maxSize - max(row[i], col[j]);
            arr[i][j] += dif;
            row[i] += dif;
            col[i] += dif;
            res += dif;
            if (row[i] == maxSize)
                i++;
            if (col[j] == maxSize)
                j++;
        }

        cout << res << '\n';
    }
}