#include <iostream>
using namespace std;



int daoNguocSum(int& n) {
	int s = 0;
	while (n > 0) {
		s = s * 10 + n % 10;
		n /= 10;
	}
	return s;
}

void rotateArray(int* arr, int a, int b) {

	int sum = 0;
	for (int i = 0; i < b; i++) {
		arr[i] = i + 1;

		if (i > 0)
			sum = sum * 10 + arr[i];

		cout << arr[i];
	}

	//Dao nguoc 
	sum = daoNguocSum(sum);

	cout << "\n";


	for (int i = 0; i < a - 1; i++) {

		if (sum < 1) {
			for (int j = b - 1; j > 0; j--)
				arr[j] = arr[j - 1];
			arr[0]++;
		}
		else {
			for (int j = b - 1; j > 0; j--)
				arr[j] = arr[j - 1];

			arr[0] = sum % 10;
			sum /= 10;

		}

		for (int j = 0; j < b; j++)
			cout << arr[j];
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

