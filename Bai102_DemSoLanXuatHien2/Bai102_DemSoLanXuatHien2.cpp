#include<iostream>
using namespace std;

bool KT(int arr[], int n, int d) {
    for (int i = 0; i < n; i++)
        if (arr[i] == d)
            return false;
    return true;
}
int main() {
    int n;
    int soBoTest;
    cin >> soBoTest;
    for (int k = 0; k < soBoTest; k++) {
        cout << "Test " << k + 1 << ":\n";
        cin >> n;
        int arr[100], dem[100000 + 1], thuTu[100];
        int vt = 0;
        for (int i = 0; i < 100000 + 1; i++)
            dem[i] = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            dem[arr[i]]++;
            if (KT(thuTu, vt, arr[i])) {
                thuTu[vt] = arr[i];
                vt++;
            }
        }

        for (int i = 0; i < vt; i++) {
            cout << thuTu[i] << " xuat hien " << dem[thuTu[i]] << " lan\n";
        }
    }


}