#include <iostream>

using namespace std;

long long int UCLN(long long int a, long long int b) {
	long long int r ;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}

	return a;
}

long long int BCNN(long long int a, long long int b) {
	return a * b / UCLN(a, b);
}

int main() {
	long long int a, b;
	cin >> a >> b;
	cout << UCLN(a, b) << endl;
	cout << BCNN(a, b);

	return 0;
}
