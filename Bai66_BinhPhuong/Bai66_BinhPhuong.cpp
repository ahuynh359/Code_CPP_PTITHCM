#include<iostream>
using namespace std;
int main() {

	long long int n, * arr;
	cin >> n;
	arr = new long long int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] * arr[i] << endl;
	}

}