#include<iostream>
#include<math.h>
using namespace std;

bool SNT(int n) {
    if (n < 2)
        return false;
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}


bool KT(const int arr[], int n, int d) {
    for (int i = 0; i < n; i++)
        if (arr[i] == d)
            return false;
    return true;
}

int main() {
    int soBoTest;
    int n;
    int arr[100], dem[100000 + 1], thuTu[100];

    for (int i = 0; i < 100000 + 1; i++)
        dem[i] = 0;
    int vt;
    int tam;
    cin >> soBoTest;
    for (int k = 0; k < soBoTest; k++) {
        vt = 0;
        cout << "Test " << k + 1 << ":\n";
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (SNT(arr[i]))
                dem[arr[i]]++;
            if (KT(thuTu, vt, arr[i])) {
                thuTu[vt] = arr[i];
                vt++;
            }
        }

        for (int i = 0; i < vt - 1; i++)
            for (int j = i + 1; j < vt; j++)
                if (thuTu[i] > thuTu[j]) {
                    tam = thuTu[i];
                    thuTu[i] = thuTu[j];
                    thuTu[j] = tam;
                }

        for (int i = 0; i < vt; i++)
            if (dem[thuTu[i]] > 0) {
                cout << thuTu[i] << " xuat hien " << dem[thuTu[i]] << " lan\n";

            }

        for (int i = 0; i < n; i++)
            dem[arr[i]] = 0;

 

    }


}