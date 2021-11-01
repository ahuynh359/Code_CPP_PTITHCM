
#include <iostream>
#include<math.h>
using namespace std;

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
bool SNT(int n) {
	if (n < 2)
		return false;
	if (n == 2 || n == 3 || n == 5 || n == 7)
		return true;
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}

int main()
{
	int t;
	int m, n;
	cin >> t;
	while (t--) {
		cin >> m >> n;
		if (m > n)
			swap(m, n);
		for (int i = m; i <= n; i++)
			if (SNT(i))
				cout << i << " ";
		cout << endl;
	}
}

