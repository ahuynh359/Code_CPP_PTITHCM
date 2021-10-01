#include <iostream>
using namespace std;
/*DEFGH

CDEF

BCD

AB

@*/
char kyTu(int n) {
    return char(n);
}





int main() {

    int c;
    cin >> c;
    char arr[100];


    for (int i = 0; i < c * 2 - 1; i++) {
        arr[i] = kyTu(64 + i);

    }
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < c - i; j++) {
            cout << arr[j + c - 1 - i];
        }

        cout << "\n";
    }

    return 0;
}
