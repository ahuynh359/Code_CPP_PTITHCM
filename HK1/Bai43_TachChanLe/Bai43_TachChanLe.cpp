#include <iostream>

using namespace std;

int main() {



    int n;
    int* arr, chan[100], le[100];
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int c = -1, l = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            chan[++c] = arr[i];
        else
            le[++l] = arr[i];

    }

    for (int i = 0; i <= c; i++) {
        cout << chan[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i <= l; i++)
        cout << le[i] << " ";



    return 0;
}