#include<iostream>
using namespace std;

int main() {

	int t, n, * arr, nhoNhat, nhoNhi;
	cin >> t;
	while (t--) {
		cin >> n;
		arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		nhoNhat = -1;
		nhoNhi = -1;

		for (int i = 0; i < n; i++)
			if (nhoNhat == -1 || arr[nhoNhat] > arr[i])
				nhoNhat = i;
		for (int i = 0; i < n; i++)
			if (arr[nhoNhi] > arr[i] && arr[nhoNhat] != arr[i] || nhoNhi == -1)
				nhoNhi = i;


		if (nhoNhi == nhoNhat)
			cout << -1<<endl;
		else
			cout << arr[nhoNhat] << " " << arr[nhoNhi] << endl;
		delete[]arr;
	}
}