#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t, n, res;
    vector<int> arr;
    cin >> t;

    while (t--)
    {

        cin >> n;
        arr.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        res = 0;
        for (int i = n - 1; i >= 1; i--)
        {
            int l = 0;
            int r = i;
            while (l < r)
            {
                if (arr[r] >= arr[l])
                {

                    res = max(res, r - l);
                    break;
                }
                else if (arr[r] - arr[l] < 0)
                    l++;
            }
        }
        cout << res << '\n';
    }
}