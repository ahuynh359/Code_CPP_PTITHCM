

#include <iostream>
using namespace std;

long long int UCLN(long long int a, long long int b) {
	long long int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
long long int BCNN(long long int a, long long int b) {
	return (a * b) / UCLN(a, b);
}

int main()
{
	int soboTest;
	long long int a,b;

	cin >> soboTest;

	for (int k = 0; k < soboTest; k++) {
		cin >> a>>b;
		cout << BCNN(a, b) << " " << UCLN(a, b) << endl;

	
	}




}

