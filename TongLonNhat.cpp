#include<bits/stdc++.h>

using namespace std;

int check(vector<int>& arr, vector<int>& brr, int m, int n) {
    int s = 0, sumA = 0, res = 0;
    for (int i = 0; i < m; i++) {
        sumA += arr[i];
        s = 0;
        for (int j = i + 1; j < n; j++)
            s += brr[j];
        res = max(res, s + sumA);

    }
    return res;
}

int main() {
    int t, n, m, x;
    vector<int> arr, brr;

    cin >> t;
    while (t--) {
        cin >> m >> n;
        arr.clear();
        brr.clear();

        for (int i = 0; i < m; i++) {
            cin >> x;
            arr.push_back(x);
        }

        for (int i = 0; i < n; i++) {
            cin >> x;
            brr.push_back(x);
        }

        cout << max(check(arr, brr, m, n), check(brr, arr, n, m)) << '\n';


    }

}