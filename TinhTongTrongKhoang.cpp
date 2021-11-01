
#include <iostream>
using namespace std;
int main()
{
	int t, n, l, r, * arr, q;
	long long int sum;
	cin >> t;

	while (t--) {
		cin >> n >> q;
		
		arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		while (q--) {
			cin >> l >> r;
			sum = 0;
			for (int i = l - 1; i < r; i++)
				sum += arr[i];
			cout <<sum<< endl;

		}
		delete[]arr;
	}
}

