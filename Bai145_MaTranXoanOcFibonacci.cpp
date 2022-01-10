#include<iostream>
using namespace std;
long long int tinhSoFibon(long long int n) {
	if (n == 0)
		return 0;
	if (n == 1 || n == 2)
		return 1;
	long long int* arr;
	arr = new long long int[n + 1];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 1;
	for (long long int i = 2; i <= n; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	return arr[n];
}

int main() {
	int n;
	long long int arr[51][51];
	cin >> n;
	int d = 0, gtri = 0, hang = n - 1, cot = n - 1;
	while (d <= n / 2) {
		for (int i = d; i <= cot; i++) arr[d][i] = tinhSoFibon(gtri++);
		for (int i = d + 1; i <= hang; i++) arr[i][cot] = tinhSoFibon(gtri++);
		for (int i = cot - 1; i >= d; i--) arr[hang][i] = tinhSoFibon(gtri++);
		for (int i = hang - 1; i > d; i--) arr[i][d] = tinhSoFibon(gtri++);
		d++;
		hang--;
		cot--;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}


	return 0;
}