#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	int t, n, * arr, dem;

	cin >> t;
	while (t--) {
		cin >> n;
		arr = new int[n];

		for (int i = 0; i < n; i++)
			cin >> arr[i];
		dem = 0;
		sort(arr, arr + n);
		for (int i = 0; i < n - 1; i++)
			if (arr[i] + 1 != arr[i + 1])
				dem += (arr[i + 1] - arr[i]) - 1;
		cout << dem << endl;

		delete[]arr;


	}

}