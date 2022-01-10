#include<iostream>
using namespace std;
int main() {
    int m, n, a, b;
    int arr[51][51];
    cin >> m >> n;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    cin >> a >> b;
    int temp;
    for (int i = 0; i < n; i++) {
        temp = arr[a - 1][i];
        arr[a - 1][i] = arr[b - 1][i];
        arr[b - 1][i] = temp;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j]<<" ";
        cout << endl;

    }

    return 0;
}