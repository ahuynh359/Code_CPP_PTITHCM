#include <iostream>

using namespace std;

int kiemTra(int* arr, int n, int a) {
	for (int i = 0; i < n; i++) {
		if (a == arr[i])
			return 1;
	}
	return 0;
}


int main() {

	int n, * arr, * key, * so;
	cin >> n;

	arr = new int[n];
	key = new int[n];
	so = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];

	}


	for (int i = 0; i < n; i++) {
		key[arr[i]] = 0;

	}
	for (int i = 0; i < n; i++) {
		key[arr[i]] ++;

	}

	int vt = 0;
	for (int i = 0; i < n; i++) {
		if (kiemTra(so, vt, arr[i]) == 0) {
			so[vt] = arr[i];
			vt++;
		}
	}

	for (int i = 0; i < vt; i++) {
		cout << so[i] << " " << key[so[i]] << endl;
	}


	return 0;
}