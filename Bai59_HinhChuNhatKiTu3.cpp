
#include <iostream>


char kyTu(int n) {
    return char(n);
}


using namespace std;


int main() {

    int a, b;
    cin >> a >> b;
    char arr[100];


    for (int i = 0; i < b; i++) {
        arr[i] = kyTu(64 + i);
        cout << arr[i];

    }
    cout << "\n";


    for (int i = 0; i < a - 1; i++) {
        for (int j = 0; j < b - 1; j++) {
            arr[j] = arr[j + 1];
            cout << arr[j];
        }
        cout << arr[b - 1];


        cout << "\n";
    }

    return 0;
}
