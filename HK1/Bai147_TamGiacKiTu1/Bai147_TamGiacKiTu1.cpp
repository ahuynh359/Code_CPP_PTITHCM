#include<iostream>
using namespace std;
char kyTu(int n) {
    return n + 96;
}


int main() {

    int a;
    cin >> a;
    char arr[100][100];
    int so = 1;
    for (int i = 0; i < a; i++) {
        if (i % 2 != 0)
            for (int j = i; j >= 0; j--)
                arr[i][j] = kyTu(so++);
        else {
            for (int j = 0; j < i + 1; j++)
                arr[i][j] = kyTu(so++);
        }


    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < i + 1; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }


}