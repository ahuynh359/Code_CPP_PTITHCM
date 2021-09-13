
#include <iostream>
#include<math.h>
using namespace std;

void phanTichThuaSNT(int n, const int k) {
	int dem = 0;
	int so = 0;
	if (n == 1) {
		cout << -1 << endl;
		return;
	}

	while (n % 2 == 0) {
		n /= 2;
		dem++;
		so = 2;
		if (dem == k) {
			cout << so << endl;
			return;
		}
	}


	for (int i = 3; i <= sqrt(n); i++) {
		while (n % i == 0) {
			n /= i;
			dem++;
			so = i;
			if (dem == k) {
				cout << so << endl;
				return;
			}
		}


	}


	if (n > 2) {
		dem++;
		so = n;

	}
	if (dem == k)
		cout << so;
	else
		cout << -1;
	cout << endl;
}

int main()
{
	int t;
	int n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		phanTichThuaSNT(n, k);
	}
}

