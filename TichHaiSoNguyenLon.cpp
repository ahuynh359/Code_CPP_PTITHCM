#include<bits/stdc++.h>

using namespace std;

void mul(string a, string b) {
    vector<long long> arr(a.size() + b.size() + 1, 0);
    int max = a.size() + b.size() - 2;
    for (int i = a.size() - 1; i >= 0; i--) {
        for (int j = b.size() - 1; j >= 0; j--) {
            arr[i + j] += (a[i] - '0') * (b[j] - '0');

        }
    }
    for (int i = max; i > 0; i--) {
        arr[i - 1] += arr[i] / 10;
        arr[i] %= 10;
    }
    for (int i = 0; i <= max; i++)
        cout << arr[i];
    cout << "\n";
}

int main() {
    int t;
    string a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        mul(a, b);

    }
}