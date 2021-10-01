
#include <iostream>
using namespace std;

void rotateArray(int* arr, int a, int b) {


	for (int i = 0; i < b; i++) {
		arr[i] = i + 1;
		cout << arr[i];

	}
	cout << "\n";

	int temp;



	for (int i = 0; i < a - 1; i++) {
		if (arr[0] >= b) {
			arr[0]++;
		}
		else {



			temp = arr[0];
			for (int j = 0; j < b - i - 1; j++) {
				arr[j] = arr[j + 1];

			}

			arr[b - i - 1] = temp;
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


