#include<iostream>
using namespace std;

int main() {
	int t, n, * arr, x;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int vitri = -1;
		for (int i = 0; i < n; i++)
			if (arr[i] == x) {
				vitri = i + 1;
				break;
			}

		cout << vitri << endl;

		delete[]arr;
	}
}