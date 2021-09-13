
#include <iostream>
#include<math.h>
using namespace std;

void timUocNguyenToLonNhat(long long int n) {
	long long int max;
	if (n < 2)
		return;
	while (n % 2 == 0) {
		max = 2;
		n /= 2;
	}

	for (int i = 3; i <= sqrt(n); i++) {
		while (n % i == 0) {
			n /= i;
			max = i;
		}
	}

	if (n > 2)
		max = n;
	cout <<max<< endl;
}

int main()
{
	int t;
	long long int n;
	cin >> t;
	while (t--) {
		cin >> n;
		timUocNguyenToLonNhat(n);
	}
}

