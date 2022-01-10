#include<iostream>
#include<iomanip>
using namespace std;


int main() {

    long long int n, * arr;
    cin >> n;
    arr = new long long int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << setprecision(15) << fixed <<(double) 1 / arr[i] << endl;
    }

}