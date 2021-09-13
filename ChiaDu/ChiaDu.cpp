

#include <iostream>
using namespace std;
int main()
{
	int t,a,m;
	bool check;
	cin >> t;
	while (t--) {
		cin >> a >> m;
		check = false;
		int i;
		for ( i = 1; i < m; i++) {
			if ((a * i) % m == 1) {
				check = true;
				break;
			}
		}

		if (check)
			cout << i << endl;
		else
			cout << -1 << endl;

	}

}

