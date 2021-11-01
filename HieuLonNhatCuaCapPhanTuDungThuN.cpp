#include<iostream>
using namespace std;
int max(int a, int b) {
    return a > b ? a : b;
}
int main() {
    int t, * arr, n;
    cin >> t;
    while (t--) {
        cin >> n;
        arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int m = -1;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                m = max(m, arr[j] - arr[i]);
            }
        }
        cout << m << endl;

        delete[]arr;
    }
}