
#include <iostream>

using namespace std;
void print(int* arr, int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i];
	cout << " ";
}
void next(int *arr,int n,int j) {

	for (int i = 0; i <= 1; i++) {
		arr[j] = i;
		if (j == n - 1)
			print(arr, n);
		else next(arr, n, j + 1);
	}
}
int main()
{
	int t, n,*arr;

	cin >> t;
	while (t--) {
		cin >> n;
		arr = new int[n];
		next(arr,n,0);
		cout << endl;
		delete[]arr;
	
	}
}

