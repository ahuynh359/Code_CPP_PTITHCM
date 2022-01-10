#include <iostream>

using namespace std;

int dem(int n) {
    int s = 0;
    while (n > 0) {
        s++;
        n /= 10;
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    cout << dem(n);
}
