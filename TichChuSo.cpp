#include<iostream>

using namespace std;

int tich(int n) {
    int s = 1;
    while (n > 0) {
        s *= n % 10;
        n /= 10;
    }

    return s;

}

int main() {
    int n;
    cin >> n;
    cout << tich(n);
}