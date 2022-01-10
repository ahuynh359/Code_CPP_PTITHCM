#include <iostream>
#include<math.h>

using namespace std;

bool SNT(int n) {
    if (n < 2)
        return false;
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int tong(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

bool square(int n) {
    int s = sqrt(n);
    return s * s == n;
}

bool isFibon(int n) {
    return square(5 * n * n - 4) || square(5 * n * n + 4);
}

int main() {
    int* s;
    int a, b;
    cin >> a >> b;
    s = new int[b + 1];


    if (a > b)
        swap(a, b);
    for (int i = a; i <= b; i++)
        if (SNT(i) && isFibon(tong(i)))
            cout << i << " ";
    delete[] s;

}

