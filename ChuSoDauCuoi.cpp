#include <iostream>

using namespace std;

int timChuSoDau(int n) {
    while (n > 10) {
        n /= 10;
    }
    return n;
}

int main() {
    int n;
    cin >> n;
    cout << timChuSoDau(n) << " " << n % 10;
}

