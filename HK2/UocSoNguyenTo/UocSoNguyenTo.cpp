
#include <iostream>
#include<math.h>
using namespace std;

void phanTichThuaSNT(long long int n) {
	if (n < 2)
		return;
	while (n % 2 == 0) {
		cout << 2 << " ";
		n /= 2;
	}

	for (int i = 3; i <= sqrt(n); i++) {
		while (n % i == 0) {
			cout << i<<" ";
			n /= i;
		}
	}

	if (n > 2)
		cout << n;
	cout << endl;
}

int main()
{
	int t;
	long long int n;
	cin >> t;
	while (t--) {
		cin >> n;
		phanTichThuaSNT(n);
	}
}

