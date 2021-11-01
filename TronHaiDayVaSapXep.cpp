#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	int t, m, n;
	long long int* arr, * brr,*crr;

	cin >> t;
	while (t--) {
		cin >> m >> n;
		arr = new long long int[m+n];
		brr = new long long int[n];
		for (int i = 0; i < m; i++)
			cin >> arr[i];
		for (int i = 0; i < n; i++)
			cin >> brr[i];
		for (int i = m; i < m + n; i++)
			arr[i] = brr[i - m];
		sort(arr, arr + m + n);
		for (int i = 0; i < m + n; i++)
			cout << arr[i] << " ";;
		cout << endl;
		


		

		delete[]arr;
		delete[]brr;

	}

}