
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t, * arr, n, min;
	cin >> t;
	while (t--) {
		cin >> n;
		arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		min = arr[n - 1] - arr[n - 2];
		for (int i = n - 2; i > 0; i--)
			if (arr[i] - arr[i - 1] < min)
				min = arr[i] - arr[i - 1];
		cout << min << endl;

		delete[]arr;
	}
}

