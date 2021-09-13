#include <iostream>

long long int tong(long long int n) {
	int s = 0;
	while (n > 0) {
		s += n % 10;
		n /= 10;
	}
	return s;
}
using namespace std;
int main() {
	int n;
	cin >> n;
	long long int* arr;
	arr = new long long int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++) {
		cout << tong(arr[i])<<endl;
	}
	
	return 0;
}
