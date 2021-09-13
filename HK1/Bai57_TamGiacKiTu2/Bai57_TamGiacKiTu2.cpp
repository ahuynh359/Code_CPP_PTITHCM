#include <iostream>
using namespace std;

char kyTu(int n) {
	return n;
}

int main() {

	int c;
	cin >> c;
	char arr[100];
	int nhay = 0;

	for (int i = 0; i < c; i++) {
		arr[i] = kyTu(65 + i + nhay);
		nhay += 1;
	}
	for (int i = 0; i < c; i++) {
		for (int j = i; j < c; j++) {
			cout << arr[j];
		}

		cout << "\n";
	}

	return 0;
}

