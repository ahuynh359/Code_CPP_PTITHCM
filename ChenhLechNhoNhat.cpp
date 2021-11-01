#include <iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main() {
    int t, * arr, n;
    cin >> t;
    while (t--) {
        cin >> n;
        arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n, greater<int>());
        int min = arr[0] - arr[1];
        for (int i = 1; i < n - 1; i++)
            if (abs(min) > abs(arr[i] - arr[i + 1]))
                min = abs(arr[i] - arr[i + 1]);
        cout << min << endl;

        delete[]arr;
    }
    return 0;
}
