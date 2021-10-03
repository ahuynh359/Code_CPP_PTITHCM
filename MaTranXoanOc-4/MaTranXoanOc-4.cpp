
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<int> brr;
    int arr[50][50];
    int d = 0, gt = 0, hang = n - 1, cot = n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> x;
            brr.push_back(x);
        }
    }
    sort(brr.begin(), brr.end());
    while (d <= n / 2) {
        for (int i = d; i <= cot; i++) arr[d][i] = brr[gt++];
        for (int i = d + 1; i <= hang; i++) arr[i][cot] = brr[gt++];
        for (int i = cot - 1; i >= d; i--) arr[hang][i] = brr[gt++];
        for (int i = hang - 1; i > d; i--) arr[i][d] = brr[gt++];
        d++;
        hang--;
        cot--;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }


}
