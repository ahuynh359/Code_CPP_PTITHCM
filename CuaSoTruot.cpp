#include<bits/stdc++.h>

using namespace std;


int main() {
    int t, m, n, r, k, e, u;
    int arr[100][100], brr[100][100], crr[100][100];


    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    cin >> m;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            cin >> brr[i][j];
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            r = i;
            k = j;
            if (r >= m) {
                r -= (r / m) * m;

            }
            if (k >= m) {
                k -= (k / m) * m;

            }
            crr[i][j] = arr[i][j] * brr[r][k];

        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << crr[i][j] << " ";
        cout << endl;
    }


}
