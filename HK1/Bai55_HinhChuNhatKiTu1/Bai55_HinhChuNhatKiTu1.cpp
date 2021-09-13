#include <iostream>


char kyTu(int n) {
	return n + 96;
}

using namespace std;


int main() {

	int a, b;
	cin >> a >> b;
	char arr[100];
	for (int i = 0; i < b; i++) {
		arr[i] = kyTu(b);

	}

	//Chia lam 2 phan
	// Phan 1 0-i 
	// Phan 2 bien doi i-b 

	for (int i = 0; i < a; i++) {
		if (a > b && i > a - b + 1) {
			for (int j = 0; j < b; j++)
				cout << arr[j];


		}
		else {

			for (int j = 0; j < i; j++) {
				cout << arr[j];
			}
			for (int j = i; j < b; j++) {
				if (a > b) arr[j] = kyTu(a - i); else
					arr[j] = kyTu(b - i);
				cout << arr[j];



			}
		}




		cout << "\n";


	}
	return 0;
}
