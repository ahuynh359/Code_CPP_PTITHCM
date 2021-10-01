#include<iostream>
using namespace std;

char kyTu(int n) {
    return n + 65;
}


int main() {

    int a;
    cin >> a;
    char arr[100][100];
    int so = 0;

    for (int i = 0; i < a; i++) {
        for (int j = i; j < a; j++) {

            arr[j][i] = kyTu(so++);


        }

    }


    for (int i = 0; i < a; i++) {
        for (int j = 0; j < i + 1; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }


}