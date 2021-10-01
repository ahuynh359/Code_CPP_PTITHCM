#include<iostream>
#include<math.h>
using namespace std;

bool _SNT(long long int n) {
    if (n < 2)
        return false;
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        return false;
    for (long long int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

long long int SNT(long long int* n) {

    while (!_SNT(*n))
        (*n)++;

    return *n;

}


int main() {
    int t;
    cin >> t;
    int n;

    for (int k = 0; k < t; k++) {
        cout << "Test " << k + 1 << ":\n";
        cin >> n;
        long long int arr[100][100];
        long long int gTri = 2;
        int d = 0, cot = n - 1, hang = n - 1;
        while (d <= n / 2) {
            for (int i = d; i <= cot; i++) {
                arr[d][i] = SNT(&gTri);
                gTri++;
            }
            for (int i = d + 1; i <= hang; i++) {
                arr[i][cot] = SNT(&gTri);
                gTri++;
            }
            for (int i = cot - 1; i >= d; i--) {
                arr[hang][i] = SNT(&gTri);
                gTri++;
            }

            for (int i = hang - 1; i > d; i--) {
                arr[i][d] = SNT(&gTri);
                gTri++;
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