#include <iostream>


char kyTu(int n) {
    return n;
}


using namespace std;


int main() {

    int a, b;
    cin >> a >> b;
    char arr[100];

    for (int i = 0; i < b; i++) {
        arr[i] = kyTu(i + 65);
        cout << arr[i];

    }
    cout << "\n";

    char temp;
    for (int i = 0; i < a - 1; i++) {
        if (a > b && i >= b) {
            for (int j = 0; j < b; j++)
                cout << arr[j];
        }
        else {
            temp = arr[0];

            for (int j = 0; j < b - i; j++) {
                arr[j] = arr[j + 1];
            }

            arr[b - i - 1] = temp;
            for (int j = 0; j < b; j++) {
                cout << arr[j];
            }
        }
       
        cout << "\n";
    }


    return 0;
}
