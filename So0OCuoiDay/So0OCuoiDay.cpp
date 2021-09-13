

#include <iostream>

using namespace std;

void xuLiMang(long long int* arr, long long int n) {
	long long int dem = 0;
	for (int i = 0; i < n; i++)
		if (arr[i] != 0)
			cout << arr[i] << " ";
		else
			dem++;
	for (int i = 0; i < dem; i++)
		cout << "0 ";
	cout << endl;
}
int main()
{
	int t;
	long long int n, * arr;
	cin >> t;
	while (t--) {
		cin >> n;
		arr = new long long int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		xuLiMang(arr, n);
		delete[]arr;
	}
}

