#include<iostream>
using namespace std;

int main() {
	int t, n, * arr;
	cin >> t;
	while (t--) {
		cin >> n ;
		arr = new int[n];
		for (int i = 0; i < n-1; i++)
			cin >> arr[i];

		for (int i = 0; i < n - 2; i++)
			if (arr[i] + 1 != arr[i + 1]) {
				cout << arr[i] + 1<<endl;
				break;
			}

		

		delete[]arr;
	}
}