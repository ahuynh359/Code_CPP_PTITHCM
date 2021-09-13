#include <iostream>

using namespace std;

int chu_So_Dau(int n) {
    while (n > 10) {
        n /= 10;
    }
    return n;
}

int main() {
    int n;
    cin >> n;
    cout << chu_So_Dau(n) << " " << n % 10;
}

