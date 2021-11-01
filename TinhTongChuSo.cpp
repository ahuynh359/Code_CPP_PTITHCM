#include<iostream>
using namespace std;

long long int rutGon(long long int n) {
	long long int a=0;

	while (n > 0) {
		a += n % 10;
		n /= 10;
	}
	return a;
}
int main() {
	int t;
	long long int n;
	cin >> t;
	while (t--) {
		cin >> n;
		do {
			n = rutGon(n);
		} while (n > 9);
		cout << n << endl;

	}
}