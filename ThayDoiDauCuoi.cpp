#include <iostream>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int n, * a;
    cin >> n;
    a = new int[10];
    int dem = 0;
    while (n > 0) {

        a[dem] = n % 10;
        n /= 10;
        dem++;

    }
    swap(a[dem - 1], a[0]);

    if (a[dem - 1] == 0)
        for (int i = dem - 2; i >= 0; i--) {
            cout << a[i];
        }

    else

        for (int i = dem - 1; i >= 0; i--) {
            cout << a[i];
        }

    delete[]a;
}

