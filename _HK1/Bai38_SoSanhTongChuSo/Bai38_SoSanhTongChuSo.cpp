#include <iostream>
using namespace std;

int tongChuSo(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    int a, b;
    cin >> a >> b;
    if (tongChuSo(b) < tongChuSo(a))
        cout << b << " " << a;
    else
        cout << a << " " << b;
    return 0;
}
