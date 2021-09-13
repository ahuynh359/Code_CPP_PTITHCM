#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int soBoTest;
    int a, b, c, d;
    cin >> soBoTest;
    for (int k = 0; k < soBoTest; k++) {
        cin >> a >> b >> c >> d;
        if (c - a == d - b)
            cout << "YES" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
