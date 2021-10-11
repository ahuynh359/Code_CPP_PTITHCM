
#include <iostream>
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

	long long int tu = 0;
	long long int mau = 0;

};

void nhap(PhanSo& p) {

	cin >> p.tu >> p.mau;
}

void rutgon(PhanSo& p) {
	int gcd = GCD(p.tu, p.mau);
	p.tu /= gcd;
	p.mau /= gcd;

}
PhanSo tong(PhanSo p, PhanSo q) {


	struct PhanSo v;
	v.tu = p.tu * q.mau + q.tu * p.mau;

	v.mau = p.mau * q.mau;

	rutgon(v);
	return v;

}
void in(PhanSo p) {
	cout << p.tu << "/" << p.mau;
}
int main()
{
	struct PhanSo p, q;
	nhap(p); nhap(q);
	PhanSo t = tong(p, q);
	in(t);
	return 0;
}

