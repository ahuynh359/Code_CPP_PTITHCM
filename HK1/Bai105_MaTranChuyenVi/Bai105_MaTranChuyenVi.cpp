#include<iostream>
using namespace std;

int main() {

    int arr[10][10], brr[10][10];
    int n, m;
    cin >> n >> m;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            brr[j][i] = arr[i][j];
        }


    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << brr[i][j] << " ";
        cout << endl;
    }


}

