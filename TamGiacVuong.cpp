#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t, n;
    vector<long long> arr;
    cin >> t;

    while (t--)
    {
        bool check = false;
        cin >> n;
        arr.resize(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] = arr[i] * arr[i];
        }
        for (int i = n - 1; i >= 2; i--)
        {
            int l = 0;
            int r = i - 1;
            while (l < r)
            {
                if (arr[l] + arr[r] == arr[i])
                {
                    check = true;
                    break;
                }
                (arr[l] + arr[r] < arr[i]) ? l++ : r--;
            }
        }
        if (check)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }
}