#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    vector<int> arr;
    cin >> t;
    while (t--)
    {
        cin >> n;
        arr.resize(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int l = 0;
        int r = 0;
        int maxSum, res = 0;
        while (r < n - 1)
        {
            maxSum = 0;
            for (int i = l; i <= r; i++)
            {
                maxSum = max(maxSum, i + arr[i]);
            }
            l = r + 1;
            r = maxSum;
            res++;
        }
        cout << res << '\n';
    }
}
