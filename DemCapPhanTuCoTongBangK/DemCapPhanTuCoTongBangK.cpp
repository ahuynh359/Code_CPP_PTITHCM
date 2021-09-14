#include<iostream>
using namespace std;
int main() {
	int t, n, * arr, k, dem;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		dem = 0;
		
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				if (arr[i] + arr[j] == k)
					dem++;
		cout << dem << endl;
		delete[]arr;
	}
}