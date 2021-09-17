

#include <iostream>
using namespace std;
long long int UCLN(long long int a, long long int b) {
	while (b > 0) {
		long long int r = a % b;
		a = b;
		b = r;

	}
	return a;
}
int main()
{

	int t;
	long long int a, x, y;
	cin >> t;
	while (t--) {
		cin >> a >> x >> y;
		for (long long int i = 0; i < UCLN(x, y); i++)
			cout << a;
		cout << endl;

	}
}

