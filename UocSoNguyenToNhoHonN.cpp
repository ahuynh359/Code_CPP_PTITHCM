
#include <iostream>
#include<math.h>
using namespace std;

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
	long long int n;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 2; i <= n; i++)
			if (SNT(i))
				cout << i << " ";
		cout << endl;
	}
}

