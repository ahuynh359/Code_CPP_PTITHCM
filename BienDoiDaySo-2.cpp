#include<iostream>
#include<algorithm>
#include<string>

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

        cout << arr[0] * arr[1] << " ";
        for (int i = 1; i < n - 1; i++)
            cout << arr[i - 1] * arr[i + 1] << " ";
        cout << arr[n - 2] * arr[n - 1] << " ";

        cout << endl;
        delete[]arr;

    }

}