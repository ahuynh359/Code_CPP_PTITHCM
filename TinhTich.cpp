#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	int t, m, n;
	long long int* arr, * brr;

	cin >> t;
	while (t--) {
		cin >> m >> n;
		arr = new long long int[m];
		brr = new long long int[n];

		for (int i = 0; i < m; i++)
			cin >> arr[i];
		for (int i = 0; i < n; i++)
			cin >> brr[i];



		sort(arr, arr + m);
		sort(brr, brr + n);

		cout << arr[n - 1] * brr[0] << endl;

		delete[]arr;
		delete[]brr;

	}

}