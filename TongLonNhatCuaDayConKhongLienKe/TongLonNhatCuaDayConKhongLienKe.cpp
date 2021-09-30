#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
#include<string>

using namespace std;

long long int max(long long int a, long long int b) {
    return a > b ? a : b;
}

int main() {
    int t, n, * arr;
    long long int* tam;
    cin >> t;
    while (t--) {
        cin >> n;
        arr = new int[n];
        tam = new long long int[n] {0};
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        tam[0] = arr[0];
        tam[1] = max(arr[1], arr[0]);
        for (int i = 2; i < n; i++) {
            tam[i] = max(tam[i - 2] + arr[i], tam[i - 1]);
        }
        cout << tam[n - 1] << endl;

        delete[]arr;
    }
    return 0;

}