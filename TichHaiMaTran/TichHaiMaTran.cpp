#include<iostream>

using namespace std;

int main() {
    int n, m, p, arr[50][50], brr[50][50], crr[50][50];
    cin >> n >> m >> p;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            cin >> brr[i][j];


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            crr[i][j] = 0;
            for (int k = 0; k < m; k++)
                crr[i][j] = crr[i][j] + (arr[i][k] * brr[k][j]);


            cout << crr[i][j] << " ";


        }
        cout << endl;
    }
}