
#include <iostream>
using namespace std;

long long int soFibon( int n) {
	long long int arr[100];
	arr[0] = 0;
	arr[1] = 1;
	if (n == 0)
		return 0;
	if (n == 1 || n == 2)
		return 1;
	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i -2];
	}

	return arr[n];
}
int main()
{
	int n;
	long long int* arr;
	cin >> n;
	arr = new long long int[100];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++)
		cout << soFibon(arr[i]) << endl;

}

