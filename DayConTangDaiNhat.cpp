#include<iostream>

using namespace std;

int main() {
    int t, n, * arr, * dem;
    cin >> t;
    while (t--) {
        cin >> n;
        arr = new int[n];
        dem = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            dem[i] = 1;
        }
        int max = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] < arr[j] && dem[i] + 1 > dem[j]) {
                    dem[j] = dem[i] + 1;
                    if (dem[j] > max) {
                        max = dem[j];
                    }
                }
            }
        }

        cout << max << endl;

        delete[]arr;
    }
}