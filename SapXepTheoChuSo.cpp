#include<iostream>
#include<algorithm>

using namespace std;

bool check(int a, int b) {
    return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}

int main() {
    int t, n, * arr;
    cin >> t;
    while (t--) {
        cin >> n;
        arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n, check);
        for (int i = 0; i < n; i++)
            cout << arr[i];
        cout << endl;
        delete[]arr;

    }

}