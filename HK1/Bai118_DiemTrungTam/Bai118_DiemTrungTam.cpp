#include<iostream>
using namespace std;
int main() {

	int n;
	int arr[100001];
	int brr[100001];
	cin >> n;
	for (int i = 0; i < n - 1; i++) {
		cin >> arr[i] >> brr[i];
	}

	bool kt1 = true;
	for (int i = 1; i < n - 2; i++) {
		if (!(arr[i] == arr[0] || arr[i] == brr[0] ||
			brr[i] == arr[0] || brr[i] == brr[0])) {
			kt1 = false;
			break;
		}


	}

	if (kt1)
		cout << "Yes";
	else
		cout << "No";


	return 0;
}