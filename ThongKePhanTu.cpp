#include <bits/stdc++.h>

using namespace std;

bool check(vector<int> &arr, int x)
{
    return find(arr.begin(), arr.end(), x) != arr.end();
}

int main()
{
    int x;
    vector<int> arr;
    map<int, int> count;
    vector<int> res;
    while (cin >> x)
    {
        arr.push_back(x);
        count[x]++;
        if (!check(res, x))
            res.push_back(x);
    }
    for (auto &it : res)
        cout << it << " " << count[it] << '\n';
}