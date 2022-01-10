#include <bits/stdc++.h>

using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

void solve(int *arr, int n)
{
    int *dp1, *dp2;
    int res1 = 0, res2;
    dp1 = new int[n]{};
    dp2 = new int[n]{0};

    for (int i = 0; i < n; i++)
    {
        dp1[i] = 1;
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j])
                dp1[i] = max(dp1[i], dp1[j] + 1);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        dp2[i] = 1;
        for (int j = n - 1; j > i; j--)
            if (arr[i] > arr[j])
                dp2[i] = max(dp2[i], dp2[j] + 1);
    }

    for (int i = 0; i < n; i++)
        res1 = max(res1, dp1[i] + dp2[i]);
    cout << res1 - 1 << endl;
}

int main()
{
    int t, *arr, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        solve(arr, n);
        delete[] arr;
    }
}