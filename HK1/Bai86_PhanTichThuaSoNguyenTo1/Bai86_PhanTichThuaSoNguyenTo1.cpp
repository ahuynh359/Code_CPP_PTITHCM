
#include <iostream>
using namespace std;

void phanTich(long long int n) {
	if (n == 1)
		cout << 1;
	while (n % 2 ==0) {
		cout << 2 << " ";
		n = n / 2;

	}

	for (int i = 3; i <= trunc(sqrt(n)); i++) {
		while (n % i == 0) {
			cout << i << " ";
			n /= i;
		}
			
	}

	// Neu chu can cua no nho hon 2
	if (n > 2)
		cout << n << " ";
	cout << endl;
}
int main()
{
	int soBoTest;
	cin >> soBoTest;
	long long int a;
	for (int k = 0; k < soBoTest; k++) {
		cin >> a;
		phanTich(a);
	}
}

