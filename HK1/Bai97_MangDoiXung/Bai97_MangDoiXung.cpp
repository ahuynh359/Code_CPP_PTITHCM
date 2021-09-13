#include<iostream>
using namespace std;
bool doiXung(long long int* arr, int n) {

	for (int i = 0; i < n/2; i++) 
		if (arr[i] != arr[n - i - 1])
			return false;
	

	return true;
}

int main() {
	int n,soBoTest;
	cin >> soBoTest;
	long long int* arr;
	arr = new long long int[100];
	for (int k = 0; k < soBoTest; k++) {
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		if (doiXung(arr, n))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
}
