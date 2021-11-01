#include <iostream>
#include<math.h>

using namespace std;

bool SNT(int n) {
    if (n < 2) return false;

    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;

    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int* arr;
    int n, s = 0;
    cin >> n;
    arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (SNT(arr[i]))
            s += 1;

    }

    cout << s << " ";
    for (int i = 0; i < n; i++)
        if (SNT(arr[i]))
            cout << arr[i] << " ";


}