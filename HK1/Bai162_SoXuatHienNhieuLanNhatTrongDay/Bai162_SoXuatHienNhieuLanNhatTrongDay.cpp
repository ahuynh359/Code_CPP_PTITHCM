#include<iostream>
using namespace std;
bool check(const int* arr, int n, int d) {
	for (int i = 0; i < n; i++)
		if (arr[i] == d)
			return false;
	return true;
}

int main() {
	int t;
	int n;
	int* arr, * dem, * thuTu;

	cin >> t;
	while (t--) {
		cin >> n;
		arr = new int[n];
		dem = new int[30001];
		thuTu = new int[n];

		for (int i = 0; i <= 30000; i++)
			dem[i] = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			dem[arr[i]]++;
		}
		int vt = 0;

		for (int i = 0; i < n; i++) {
			if (check(thuTu, vt, arr[i])) {
				thuTu[vt] = arr[i];
				vt++;
			}

		}

		int max = 0;
		for (int i = 0; i <= 30000; i++)
			if (dem[i] > max)
				max = dem[i];

		for (int i = 0; i < vt; i++) {
			if (dem[thuTu[i]] == max)
				cout << thuTu[i] << " ";
		}

		cout << endl;
		free(dem);
		free(arr);

	}

	return 0;
}