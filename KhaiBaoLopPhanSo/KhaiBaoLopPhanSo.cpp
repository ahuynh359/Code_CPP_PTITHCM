#include<iostream>
#include <math.h>
#include <iomanip>

using namespace std;

long long int GCD(long long int a, long long int b) {
    while (b > 0) {
        long long int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

class PhanSo {

private:
    long long int tu, mau;
public:


    PhanSo(long long int tu, long long int mau) {
        this->tu = tu;
        this->mau = mau;
    }

    friend ostream& operator<<(ostream& output, const PhanSo& D) {
        output << D.tu << "/" << D.mau;
        return output;
    }

    friend istream& operator>>(istream& input, PhanSo& D) {
        input >> D.tu >> D.mau;
        return input;
    }

    void rutgon() {
        long long int gcd = GCD(tu, mau);
        tu /= gcd;
        mau /= gcd;
    }
};


int main() {
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}