#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;
    if (a <= 0 || b <= 0)
        cout << "0";
    else {
        cout << (a + b) * 2 << endl;
        cout << a * b;
    }
}

