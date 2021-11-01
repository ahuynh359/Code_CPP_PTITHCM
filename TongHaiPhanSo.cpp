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

struct PhanSo {
    long long int tu, mau;
};

void nhap(PhanSo& p) {
    cin >> p.tu >> p.mau;


}

PhanSo tong(PhanSo p, PhanSo q) {
    PhanSo v;
    if (p.mau == q.mau) {
        v.tu = p.tu + q.tu;
        v.mau = p.mau;
    }
    else {
        v.tu = p.tu * q.mau + q.tu * p.mau;
        v.mau = p.mau * q.mau;
    }
    long long int t = GCD(v.tu, v.mau);

    v.tu /= t;
    v.mau /= t;
    return v;
}

void in(PhanSo p) {

    cout << p.tu << "/" << p.mau;
}

int main() {
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}