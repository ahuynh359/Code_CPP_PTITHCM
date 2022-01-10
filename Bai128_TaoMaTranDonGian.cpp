#include<iostream>
using namespace std;

int main() {


    int n;
    int arr[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        arr[i] = i;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++)
            cout << "0 ";
        for (int j = 0; j < n - i; j++)
            cout << arr[i] << " ";
        cout << endl;
    }





    return 0;
}
