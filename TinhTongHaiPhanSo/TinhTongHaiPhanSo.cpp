
#include <iostream>
using namespace std;
//#include<iostream>
//#include <math.h>
//#include <iomanip>
//using namespace std;
//
//long long int GCD(long long int a, long long int b) {
//    while (b > 0) {
//        long long int r = a % b;
//        a = b;
//        b = r;
//    }
//    return a;
//}
//struct PhanSo {
//    long long int  tu, mau;
//};
//
//void nhap(PhanSo& p) {
//    cin >> p.tu >> p.mau;
//    long long int gcd = GCD(p.mau, p.tu);
//    p.tu /= gcd;
//    p.mau /= gcd;
//
//}
//PhanSo tong(PhanSo p, PhanSo q) {
//    PhanSo v;
//    long long int   t = GCD(p.mau, q.mau);
//    if (t > 1) {
//        if (p.mau < q.mau) {
//            v.tu = p.tu * t + q.tu;
//            v.mau = q.mau;
//        }
//        else if (q.mau < p.mau)
//        {
//            v.tu = q.tu * t + p.tu;
//            v.mau = p.mau;
//        }
//        else {
//            v.tu = q.tu + p.tu;
//            v.mau = q.mau;
//        }
//
//
//    }
//    else {
//        v.tu = p.tu * q.mau + q.tu * p.mau;
//        v.mau = p.mau * q.mau;
//    }
//    t = GCD(v.tu, v.mau);
//    v.tu /= t;
//    v.mau /= t;
//    return v;
//}
//
//void in(PhanSo p) {
//    cout << p.tu << "/" << p.mau;
//}
//int main() {
//    struct PhanSo p, q;
//    nhap(p); nhap(q);
//    PhanSo t = tong(p, q);
//    in(t);
//    return 0;
//}
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

