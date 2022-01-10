#include <bits/stdc++.h>

using namespace std;

int finDis(vector<int> arr, int x) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x)
            return i;
    }
    if (x < arr[0])
        return -1;
    return arr.size();
}

int main() {
    vector<int> arr, res;
    int n, x, t, k, dem0;

    cin >> t;
    while (t--) {
        cin >> n;
        arr.clear();
        res.clear();
        dem0 = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            arr.push_back(x);
        }
        cin >> k >> x;
        if (!binary_search(arr.begin(), arr.end(), x) && x > arr[0] && x < arr[n - 1])
            continue;


        int dis = finDis(arr, x);
        int l = dis - 1;
        int r = dis + 1;

        if (k % 2 == 0) {
            for (int i = 0; i < k / 2; i++) {
                if (l < 0)
                    res.push_back(0);
                else
                    res.push_back(arr[l]);
                l--;
            }

            for (int i = 0; i < k / 2; i++) {
                if (r >= n)
                    dem0++;
                else
                    res.push_back(arr[r]);
                r++;
            }
        } else if (k % 2 != 0) {
            for (int i = 0; i < k; i++) {
                if (abs(x - arr[l]) < abs(x - arr[r])) {
                    if (l < 0)
                        res.push_back(0);
                    else
                        res.push_back(arr[l]);
                    l--;

                } else {
                    if (r >= n)
                        dem0++;
                    else
                        res.push_back(arr[r]);
                    r++;
                }
            }
        }
        sort(res.begin(), res.end());
        for (int re: res)
            cout << re << " ";
        for (int i = 0; i < dem0; i++)
            cout << 0 << " ";
        cout << '\n';


    }
}