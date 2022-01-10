#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int *a = new int[n + 1];
        long long dem = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];

        }
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++) {
            int temp = a[i] + x;
            int temp2 = lower_bound(a, a + n, temp) - a;

            if ((temp2 - i - 1) >= 1) {
                dem += (temp2 - i - 1);
            }
        }
        cout << dem << endl;
        delete[]a;

    }
}