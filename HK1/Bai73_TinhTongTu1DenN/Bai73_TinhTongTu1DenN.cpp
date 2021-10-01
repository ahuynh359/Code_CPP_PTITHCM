#include <iostream>

using namespace std;
int main() {
	int n;
	cin >> n;
	long long int* arr;
	arr = new long long int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++) {
		cout << (1 + arr[i]) * arr[i] / 2 << endl;

	}
	return 0;
}
