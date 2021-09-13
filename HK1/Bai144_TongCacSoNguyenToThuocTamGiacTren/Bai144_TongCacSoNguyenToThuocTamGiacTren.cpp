#include<iostream>
using namespace std;

bool SNT(int n) {
    if (n < 2)
        return false;
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;

}

int main() {
    int n;
    cin >> n;
    int arr[51][51];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    int dem = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            if (SNT(arr[i][j]))
                dem += arr[i][j];

        }
    }

    cout << dem;


    return 0;
}