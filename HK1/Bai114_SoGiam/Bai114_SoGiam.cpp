#include<iostream>
using namespace std;

bool soGiam(long long int n) {
    int soCuoi;

    while (n > 0) {
        if (n / 10 == 0)
            return true;
        soCuoi = n % 10;
        n /= 10;

        if (soCuoi >= (n % 10))
            return false;
    }
    return false;

}

int main() {
    int soBoTest;

    cin >> soBoTest;
    long long int a, b;
    long long int dem;

    for (int k = 0; k < soBoTest; k++) {
        dem = 0;
        cin >> a >> b;
        for (long long int i = a; i <= b; i++)
            if (soGiam(i)) {

                dem++;

            }
        cout << dem << endl;
    }


    return 0;
}


