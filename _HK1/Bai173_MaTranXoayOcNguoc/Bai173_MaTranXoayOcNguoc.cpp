#include<iostream>
#include<math.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    int n;

    for (int k = 0; k < t; k++) {
        cout << "Test " << k + 1 << ":\n";
        cin >> n;
        long long int arr[100][100];
        long long int gTri = n*n;
        int d = 0, cot = n - 1, hang = n - 1;
        while (d <= n / 2) {
            for (int i = d; i <= cot; i++) {
                arr[d][i] = gTri--;
            }
            for (int i = d + 1; i <= hang; i++) {
                arr[i][cot] = gTri--;
            }
            for (int i = cot - 1; i >= d; i--) {
                arr[hang][i] = gTri--;
            }

            for (int i = hang - 1; i > d; i--) {
                arr[i][d] = gTri--;
            }
            d++;
            hang--;
            cot--;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }

        cout << endl;

    }


}