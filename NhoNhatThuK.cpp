#include<iostream>
#include<math.h>
#include <string>
#include<map>
#include<math.h>
#include<algorithm>

using namespace std;


int main() {
    int t, n, * arr, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        cout << arr[k - 1] << endl;

        delete[]arr;
    }

    return 0;
}
