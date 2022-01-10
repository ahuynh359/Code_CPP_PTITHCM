
#include <iostream>
using namespace std;



//Tao sum luu 1->b-1

void rotateArray(int* arr, int a, int b) {

	int sum = 0;

	for (int i = 0; i < b; i++) {
		arr[i] = i + 1;
		if (i < b - 1)
			sum = sum * 10 + arr[i];


		cout << arr[i];
	}

	cout << endl;



	for (int i = 0; i < a - 1; i++) {

		if (sum < 1) {
			for (int j = b - 1; j > 0; j--) {
				arr[j] = arr[j - 1];

			}
			arr[0]++;
		}
		else {
			for (int j = 0; j < b - 1; j++)
				arr[j] = arr[j + 1];
			arr[b - 1] = sum % 10;
			sum /= 10;

		}

		for (int j = 0; j < b; j++) {
			cout << arr[j];

		}

		cout << "\n";

	}

}
int main()
{
	int a, b, * arr;
	cin >> a >> b;
	arr = new int[b];


	rotateArray(arr, a, b);








}


