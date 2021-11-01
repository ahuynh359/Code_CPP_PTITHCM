#include<iostream>

using namespace std;

long long int GCD(long long int a, long long int b) {
    while (b != 0) {
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

    friend ostream& operator<<(ostream& output, const PhanSo& ps) {
        output << ps.tu << "/" << ps.mau;
        return output;
    }

    friend istream& operator>>(istream& input, PhanSo& ps) {
        input >> ps.tu >> ps.mau;
        return input;
    }

    friend PhanSo operator+(const PhanSo& ps1, const PhanSo& ps2) {

        long long int t, m;
        if (ps1.mau == ps2.mau) {
            t = ps1.tu + ps2.tu;
            m = ps1.mau;
        }
        else {
            t = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
            m = ps1.mau * ps2.mau;
        }
        long long int gcd = GCD(t, m);

        return PhanSo(t / gcd, m / gcd);
    }
};


int main() {
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}