#include<iostream>
using namespace std;

int mang(int arr[], int n) {
    int* dem;
    dem = new int[n];
    for (int i = 0; i < n; i++)
        dem[i] = 1;
    int max = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (arr[i] < arr[j])
                if (dem[j] < dem[i] + 1) {
                    dem[j] = dem[i] + 1;
                    max = dem[j];

                }
        }
    }


    delete[] dem;
    return max;
}
int main() {
    int soBoTest;
    cin >> soBoTest;
    int n;
    int* arr;

    for (int k = 0; k < soBoTest; k++) {
        cin >> n;
        arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        printf("%d\n", mang(arr, n));

        delete[] arr;
    }
    return 0;
}