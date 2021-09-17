

#include <iostream>
#include<math.h>
using namespace std;

void phanTichTSNT(int n) {
	int dem = 0;
	while (n % 2 == 0) {
		n /= 2;
		dem++;
	}

	if (dem > 0) {
		cout << 2 << " " << dem<<endl;
		dem = 0;
	}
	for (int i = 3; i <= sqrt(n); i += 2) {
		while (n % i == 0) {
			n /= i;
			dem++;

		}
		if (dem > 0) {
			cout << i << " " << dem<<endl;
			dem = 0;
		}
	}

	if (n > 2)
		cout << n << " " << 1;
	

}

int main() {
	long long int sum, n;
	cin >> n;
		phanTichTSNT(n);
}

