#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {

	int t, n, * arr,x;

	cin >> t;
	while (t--) {
		cin >> n>>x;
		arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int dem = 0;
		for (int i = 0; i < n; i++)
			if (arr[i] == x)
				dem++;
		if (dem == 0)
			cout << -1 << endl;
		else
			cout << dem << endl;

		delete[]arr;
	}
}