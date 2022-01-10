#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
#include<string>

using namespace std;

int vt(const int* arr, int n) {

    int right = 0, left = 0;
    for (int i = 1; i < n; i++) {
        right += arr[i];
    }
    for (int i = 0, j = 1; j < n; i++, j++) {
        right -= arr[j];
        left += arr[i];
        if (left == right)
            return i + 2;
    }
    return -1;
}

int main() {
    int t, n, * arr;
    cin >> t;
    while (t--) {
        cin >> n;
        arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << vt(arr, n) << endl;


        delete[]arr;
    }
    return 0;

}