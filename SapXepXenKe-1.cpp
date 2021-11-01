#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t, * arr, n,a,b;
	cin >> t;
	while (t--) {
		cin >> n;
		arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		a = 0;
		b = n - 1;
		while (a < b) {
			cout << arr[b] << " " << arr[a] << " ";
			a++;
			b--;
		}
		if (n % 2 != 0)
			cout << arr[a];
		cout << endl;
		delete[]arr;
	}
}