

#include <iostream>
using namespace std;

long long int soFibon(int n) {
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    long long int* arr = new  long long int[n + 1];

    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    for (int i = 3; i <= n; i++)
        arr[i] = arr[i - 1] + arr[i - 2];
    return arr[n];
}

int main() {
    int t;
    int n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << soFibon(n) << endl;

    }
}

