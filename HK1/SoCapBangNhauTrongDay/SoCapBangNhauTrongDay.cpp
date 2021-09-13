#include<iostream>

using namespace std;

int main() {
    int soBoTest;
    cin >> soBoTest;
    int n;
    int* arr, * dem;
    int count;
    for (int k = 0; k < soBoTest; k++) {
        cin >> n;
        count = 0;
        arr = new int[n];
        dem = new int[101];
        for (int i = 0; i <= 100; i++)
            dem[i] = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                dem[arr[i]]++;

            }
        }

        for (int i = 0; i <= 100; i++)
            if (dem[i] > 0)
                count += dem[i];
        cin >> count;
        delete[]dem;
        delete[] arr;
    }
    return 0;
}