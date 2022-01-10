#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, res;
    string s;
    cin >> t;
    while (t--)
    {
        int arr[26]{0};
        res = 0;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            arr[s[i] - 'a']++;
            res = max(res, arr[s[i] - 'a']);
        }

        if (res <= (s.size() + 1) / 2)
            cout << 1;
        else
            cout << 0;
        cout << '\n';
    }
}