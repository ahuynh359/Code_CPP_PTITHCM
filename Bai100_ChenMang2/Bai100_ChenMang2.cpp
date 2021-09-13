#include <iostream>

using namespace std;

int main() {

	int a, b, vt, soboTest;
	int* arr1, * arr2;

	cin >> soboTest;
	for (int k = 0; k < soboTest; k++) {
		cin >> a >> b >> vt;
		
		arr1 = new int[a + b];
		arr2 = new int[b];

		for (int i = 0; i < a; i++)
			cin >> arr1[i];

		for (int i = 0; i < b; i++)
			cin >> arr2[i];

		cout << "Test " << k+1 << ":" << endl;
		cout << endl;
		//Doi phan tu a cuoi sang b don vi
		for (int i = a + b - 1; i >  vt; i--) {
			arr1[i] = arr1[i - b];

		}

		for (int i = vt; i < vt + b; i++) {
			arr1[i] = arr2[i - vt];
		}

		for (int i = 0; i < a + b; i++) {
			cout << arr1[i] << " ";
		}
		cout << endl;


	}








	return 0;
}