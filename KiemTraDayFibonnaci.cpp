#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int isSqrt(int n) {
    int x = sqrt(n);
    return x * x == n;
}

int isFibon(int n) {
    return isSqrt(5 * n * n - 4) || isSqrt(5 * n * n + 4);
}

int main() {
    int t, n;
    int* arr;
    cin >> t;
    while (t--) {
        cin >> n;
        arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (isFibon(arr[i]))
                cout << arr[i] << " ";
        }
        cout << endl;
        delete[]arr;


    }
}