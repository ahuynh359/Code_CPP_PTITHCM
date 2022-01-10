#include<iostream>
using namespace std;
int main() {

	int n;
	cin >> n;
	int arr[100][100];
	int d = 0, gTri = n, hang = n * 2 - 2, cot = n * 2 - 2;
	while (d <= n) {
		for (int i = d; i <= cot; i++) arr[d][i] = gTri;
		for (int i = d + 1; i <= hang; i++) arr[i][cot] = gTri;
		for (int i = cot - 1; i >= d; i--) arr[hang][i] = gTri;
		for (int i = hang - 1; i > d; i--) arr[i][d] = gTri;
		gTri--;
		d++;
		hang--;
		cot--;
	}

	for (int i = 0; i < n * 2 - 1; i++) {

		for (int j = 0; j < n * 2 - 1;j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}

}