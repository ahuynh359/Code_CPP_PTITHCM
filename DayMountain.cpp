#include <iostream>
#include<vector>

using namespace std;

bool dayTang(vector<int> arr, int l, int r) {
    for (int i = l; i < r; i++)
        if (arr[i] > arr[i + 1])
            return false;
    return true;
}

bool dayGiam(vector<int> arr, int l, int r) {
    for (int i = l; i < r; i++)
        if (arr[i] < arr[i + 1])
            return false;
    return true;
}

bool vuaTangGiam(vector<int> arr, int l, int r) {
    bool tang = true, giam = true;
    int n;
    n = (l + r) / 2;
    for (int i = l; i < n; i++) {
        if (arr[i] > arr[i + 1])
            tang = false;
    }

    for (int i = r; i > n; i--) {
        if (arr[i] > arr[i - 1])
            giam = false;
    }
    return tang && giam;
}

int main() {
    int t, x, n, l, r;
    cin >> t;
    vector<int> arr;
    while (t--) {
        cin >> n;

        arr.clear();

        for (int i = 0; i < n; i++) {
            cin >> x;
            arr.push_back(x);
        }

        cin >> l >> r;
        if (dayTang(arr, l, r) || dayGiam(arr, l, r) || vuaTangGiam(arr, l, r)) {
            cout << "Yes";
        }
        else
            cout << "No";
        cout << endl;

    }
}
