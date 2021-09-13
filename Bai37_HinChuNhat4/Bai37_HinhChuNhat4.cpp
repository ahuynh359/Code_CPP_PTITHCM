#include <iostream>
using namespace std;





int main() {
	int* arr, a, b;
	cin >> a >> b;
	arr = new int[b];
	int sum = 0;
	int sumDao = 0;

	if (a > b) {
		for (int i = 0; i < a; i++) {
			arr[i] = a - i;
			
		}
		sum = arr[b];
		sumDao = 2;
		
		//In dong dau
		for (int i = 0; i < b; i++)
			cout << arr[i];
		cout << "\n";
		//In b-1 dong dau
		for (int i = 0; i < a-1; i++) {
			for(int j =0 ;j<b;j++)
				arr[j] = arr[j + 1];
			if (sum >= 1) {
				arr[b - 1] = sum ;
				sum--;

			}
			else {
				arr[b - 1] = sumDao;
				sumDao ++;
			}
			
			for (int j = 0; j < b; j++)
				cout << arr[j];

			cout << "\n";
		}

		
	}

	if (a <= b) {
		for (int i = 0; i < b; i++) {
			arr[i] = b - i;
		
				cout << arr[i];
		}
		cout << "\n";
		sum =  arr[b - 2];
		for (int i = 0; i < a-1; i++) {
			for (int j = 0; j < b - 1; j++)
				arr[j] = arr[j + 1];
			arr[b - 1] = sum;
			sum++;
			for (int j = 0; j < b; j++)
				cout << arr[j];
			cout << "\n";
			
		}

	}
	

	return 0;
}
