#include<iostream>
using namespace std;

bool soHoanHao(int n) {
	if (n < 6) return false;
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
		return true;
	return false;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		if (soHoanHao(i))
			cout << i << " ";
	}
	return 0;
}