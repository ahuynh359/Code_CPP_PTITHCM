#include<math.h>
#include <iostream>
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
	int t, n,check;
	cin >> t;
	while (t--) {
		cin >> n;
		check = false;
		for (int i = 2; i <= n/2; i++)
			if (SNT(i) && SNT(n - i)) {
				cout << i << " " << n - i<<endl;
				check = true;
				break;
			}

		if (check == false)
			cout << -1 << endl;
	}
}

