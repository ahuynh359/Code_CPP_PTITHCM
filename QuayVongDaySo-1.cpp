

#include <iostream>
using namespace std;

void inPhanTu(int* arr, int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int gcd(int a, int b) {
	while (b > 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
void quayVongMang(int* arr, int n,int d) {
	
	int temp;
	for (int i = 0; i < gcd(n, d); i++) {
		temp = arr[i];
		int j = i;
		while (true) {
			int k = j + d;
			if (k >= n)
				k -= n;
			if (k == i)
				break;
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	}

}
int main()
{
	int t, d, * arr,n;
	cin >> t;
	while (t--) {
		cin >> n >> d;
		arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		quayVongMang(arr, n, d);
		inPhanTu(arr, n);


		delete[]arr;
	}
}

