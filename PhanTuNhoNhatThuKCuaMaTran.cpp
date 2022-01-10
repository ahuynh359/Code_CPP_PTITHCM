#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool check(int a, int b) {
    return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}

int main() {
    int t, n, k, * arr;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        arr = new int[n * n];
        for (int i = 0; i < n * n; i++)
            cin >> arr[i];

        sort(arr, arr + (n * n));

        cout << arr[k - 1];
        cout << endl;
        delete[]arr;

    }

}