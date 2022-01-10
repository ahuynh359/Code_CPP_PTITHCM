
#include <iostream>
#include<math.h>
using namespace std;

void phanTichThuaSNT(long long int n) {
	int dem = 0;
	if (n < 2)
		return;

	while (n % 2 == 0) {
		n /= 2;
		dem++;
	}
	if (dem > 0)
		cout << 2 << " " << dem << " ";

	dem = 0;

	for (int i = 3; i <= sqrt(n); i++) {
		while (n % i == 0) {
			n /= i;
			dem++;
		}
		if (dem > 0) {
			cout << i << " " << dem << " ";
			dem = 0;
		}
	}


	if (n > 2)
		cout << n << " " << 1 << " ";
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

