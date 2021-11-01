#include<iostream>
#include <string>

using namespace std;

void swap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int n, * arr, t;
    cin >> t;
    while (t--) {
        cin >> n;
        arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];

        }
        int i = n - 2;
        while (arr[i] < arr[i + 1])
            i--;
        swap(arr[i], arr[n - 1]);
        int a = i + 1;
        int b = n - 1;
        while (a < b) {
            swap(arr[a], arr[b]);
            a++;
            b--;
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;

        delete[]arr;
    }


}