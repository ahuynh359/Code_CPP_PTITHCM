#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (b < a) {
        int temp = a;
        a = b;
        b = temp;
    }
    int s = 0;
    for (int i = a; i <= b; i++) {
        s += i;
    }
    cout << s;
}

