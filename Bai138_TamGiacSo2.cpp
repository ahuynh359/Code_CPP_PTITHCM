#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int giaTri = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            giaTri = 1;
        else
            giaTri = 2;
        for (int j = 0; j < i + 1; j++) {
            cout << giaTri;
            giaTri += 2;

        }
        cout << endl;
    }





    return 0;
}
