
#include <iostream>
using namespace std;
bool STN(long long int n) {
	long long int s = 0;
	long long int so = n;
	while (n > 0) {
		s = s * 10 + n % 10;
		n /= 10;
	}
	if (s == so)
		return true;
	return false;


}
int main() {
	long long int n, * arr;
	cin >> n;
	arr = new long long int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
		if (STN(arr[i]))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	return 0;


}