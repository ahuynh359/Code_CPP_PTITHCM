
#include <iostream>
#include<set>

using namespace std;

bool xuatHien(int* arr, int n, int d) {
	for (int i = 0; i < n; i++)
		if (arr[i] == d)
			return true;
	return false;
}

int main() {

	int n;
	int *arr, *thuTu;
	cin >> n;
	arr = new int[n];
	thuTu = new int[n];
	int vt = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];

		

	}

	for (int i = 0; i < n; i++) {
		if (xuatHien(thuTu, vt, arr[i]) == false) {
			thuTu[vt] = arr[i];
			vt++;
		}
	}
	for (int i = 0; i < vt; i++)
		cout << thuTu[i]<<" ";


}
