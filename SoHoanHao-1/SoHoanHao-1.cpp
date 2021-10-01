#include <iostream>
using namespace std;

int soHoanHao(int n) {
	if (n < 6)
		return 0;

	int sum = 1;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			if (i * i != n)
				sum += i + n / i;
			else
				sum += i;
		}
	}
	if (sum == n)
		return 1;
	return 0;
}


int main()
{
	int n;
	cin >> n;
	cout << soHoanHao(n);


}

