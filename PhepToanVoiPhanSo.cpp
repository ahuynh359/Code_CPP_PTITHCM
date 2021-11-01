#include<iostream>
#include<math.h>

typedef long long int ll;
using namespace std;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}


struct PhanSo {
    ll tu, mau;


};

PhanSo tinhC(PhanSo a, PhanSo b) {
    PhanSo c;
    c.tu = a.tu * b.mau + b.tu * a.mau;
    c.mau = a.mau * b.mau;

    c.tu = (c.tu * c.tu);
    c.mau = (c.mau * c.mau);
    return c;
}

PhanSo tinhD(PhanSo A, PhanSo B, PhanSo C) {
    PhanSo c;
    c.tu = A.tu * B.tu * C.tu;
    c.mau = A.mau * B.mau * C.mau;
    return c;

}

void process(PhanSo A, PhanSo B) {
    PhanSo d = tinhC(A, B);
    ll g = gcd(d.tu, d.mau);
    d.tu /= g;
    d.mau /= g;

    cout << d.tu << "/" << d.mau << " ";
    d.tu = A.tu * B.tu * d.tu;
    d.mau = A.mau * B.mau * d.mau;
    g = gcd(d.tu, d.mau);
    d.tu /= g;
    d.mau /= g;

    cout << d.tu << "/" << d.mau << endl;


}

int main() {
    int t;
    cin >> t;
    while (t--) {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}