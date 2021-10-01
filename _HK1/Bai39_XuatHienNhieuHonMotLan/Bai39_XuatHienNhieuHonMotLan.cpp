#include <iostream>

using namespace std;

int kiemTraSoXuatHienTrongMang(int* arr, int n, int a) {
    for (int i = 0; i < n; i++)
        if (arr[i] == a)
            return 1;
    return 0;


}

int main() {

    int n, arr[100], kq[100], vt = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        int dem = 0;

        for (int j = i+1; j < n; j++)
            if (arr[j] == arr[i])
                dem++;

        if (dem > 1 && kiemTraSoXuatHienTrongMang(kq, vt, arr[i]) == 0) {
            kq[vt] = arr[i];
            vt++;
        }

    }
    if (vt == 0)
        cout << "0"; 
    else
    for (int i = 0; i < vt; i++) {
        cout << kq[i] << " ";
    }

    return 0;
}