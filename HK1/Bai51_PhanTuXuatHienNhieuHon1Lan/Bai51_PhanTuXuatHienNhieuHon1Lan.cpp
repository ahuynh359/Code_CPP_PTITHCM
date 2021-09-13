
#include <iostream>

using namespace std;

int xuatHien(int* arr, int n, int d) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == d) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int n, arr[100], result[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int dem;
    int vt = 0;
    for (int i = 0; i < n; i++) {
        dem = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i])
                dem++;
        }

        if (dem > 1 && xuatHien(result, vt, arr[i]) == 0) {
            result[vt] = arr[i];
            vt++;
        }
    }
    cout << vt << endl;
    for (int i = 0; i < vt; i++) {
        cout << result[i] << " ";
    }


    return 0;
}
