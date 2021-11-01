#include <iostream>
using namespace std;

void in(int* arr, int n) {
    for (int i = 1; i <= n; i++)
        cout << arr[i];
    cout << " ";
}

void Try(int j, int n, int k, int* arr) {
    for (int i = arr[j - 1] + 1; i <= n - k + j; i++) {
        arr[j] = i;
        if (j == k)
            in(arr, k);
        else
            Try(j + 1, n, k, arr);
    }

}
int main()
{
    int t, n, k, * arr;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        arr = new int[k + 1];
        arr[0] = 0;
        Try(1, n, k, arr);
        cout << endl;
        delete[]arr;

    }

}

