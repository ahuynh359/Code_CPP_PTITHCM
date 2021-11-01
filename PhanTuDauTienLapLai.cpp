#include<iostream>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;

int main() {

	int t, n, * arr, k;
	map<int, int>dem;
	cin >> t;
	while (t--) {
		cin >> n ;
		arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		bool check = false;
		for (int i = 0; i < n; i++) {
			dem[arr[i]]++;
			if (dem[arr[i]] == 2) {
				check = true;
				cout << arr[i] << endl;
				break;
			}
		}

		if (check == false)
			cout << -1<<endl;
		dem.clear();

		delete[]arr;
	}
}