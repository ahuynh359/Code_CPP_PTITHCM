#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, x;
    vector<int> arr;

    cin >> t;
    while (t--)
    {
        cin >> n;
        arr.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr.push_back(x);
        }

        vector<int> brr = arr;
        sort(brr.begin(), brr.end());
        int l = 0, r = n - 1;
        while (arr[l] == brr[l])
            l++;
        while (arr[r] == brr[r])
            r--;
        cout << l + 1 << " " << r + 1 << '\n';
    }
}