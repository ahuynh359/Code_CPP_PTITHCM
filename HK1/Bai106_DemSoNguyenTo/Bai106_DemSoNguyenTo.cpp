#include<iostream>
#include<math.h>

using namespace std;

bool SNT(int n) {
    if (n < 2)
        return false;
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        return false;
    for (int i = 2; i <= trunc(sqrt(n)); i++)
        if (n % i == 0)
            return false;
    return true;
}

bool SNTnho(int n) {
    while (n > 0) {
        if (!SNT(n % 10))
            return false;
        n /= 10;
    }
    return true;
}
int main() {
    int soBoTest;
    cin >> soBoTest;
    int a, b;
    int dem = 0;
    for (int i = 0; i < soBoTest; i++) {
        dem = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++) {
            if (SNT(i) && SNTnho(i))
                dem++;
        }
        cout << dem << endl;
    }

}