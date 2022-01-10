#include<iostream>
using namespace std;

int main() {
    int soBoTest;
    int arr[10][10];
    int n, m;
    cin >> soBoTest;
    for (int k = 0; k < soBoTest; k++) {
        printf("Test %d:\n", k + 1);
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];

        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++)
                cout << arr[i][j] << " ";
            cout << endl;

        }

    }
}

