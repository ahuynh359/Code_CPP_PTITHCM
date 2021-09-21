#include<iostream>
#include <string>
#include<iomanip>
#include<math.h>
#include<algorithm>
#include<regex>

using namespace std;

int KTSNT(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return i;
    }

    return n;
}

int main() {

    int arr[10000 + 1], t, n;
    arr[1] = 1;

    for (int i = 2; i <= 10000; i++)
        arr[i] = KTSNT(i);

    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }


}