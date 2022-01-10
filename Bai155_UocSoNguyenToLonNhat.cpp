#include<iostream>
using namespace std;
long long int uocLonNhat(long long int n) {
	long long int max = -1;
	while (n % 2 == 0) {
		n /= 2;
		max = 2;
	}

	for (long long int i = 3; i <= sqrt(n); i += 2) {
		while (n % i == 0) {
			n /= i;
			max = i;
		}
	}

	if (n > 2)
		max = n;
	return max;
}

int main() {
	int soBoTest;
	cin >> soBoTest;
	long long int n;
	for (int k = 0; k < soBoTest; k++) {
		cin >> n;
		cout << uocLonNhat(n) << endl;
	}

	return 0;
}