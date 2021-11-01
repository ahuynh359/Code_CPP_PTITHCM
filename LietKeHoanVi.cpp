#include <iostream>
#include <math.h>

using namespace std;

void swap(int& a, int& b) {
    int r = a;
    a = b;
    b = r;
}

int main() {
    int t, n, * arr;
    cin >> t;
    while (t--) {
        cin >> n;
        arr = new int[n];
        int i;
        for (i = 0; i < n; i++)
            arr[i] = i + 1;
        do {

            for (int i = 0; i < n; i++)
                cout << arr[i];
            cout << " ";
            i = n - 2;
            while (i >= 0 && arr[i] > arr[i + 1])
                i--;

            if (i >= 0) {
                int k = n - 1;
                while (arr[k] < arr[i]) k--;
                swap(arr[k], arr[i]);
                int a = i + 1;
                int b = n - 1;
                while (a < b) {
                    swap(arr[a], arr[b]);
                    a++;
                    b--;
                }
            }

        } while (i >= 0);
        cout << endl;
        delete[]arr;
    }


}