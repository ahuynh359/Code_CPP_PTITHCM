
#include <iostream>
using namespace std;


bool soHoanHao(int n) {
	if (n < 6)
		return false;
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
int main()
{
	int a, b;
	cin >> a >> b;
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i = a; i <= b; i++) {
		if (soHoanHao(i))
			cout << i << " ";
	}

}

