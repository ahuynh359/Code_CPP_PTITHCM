#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int n;
    int* arr;
    cin >> n;
    arr = new int[n];
   
    int tong = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        tong += arr[i];
    }
    cout << setprecision(3) << fixed << (float)(tong / n);

}