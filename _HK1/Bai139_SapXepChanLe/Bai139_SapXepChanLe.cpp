#include<iostream>
using namespace std;

void sapXep(int* arr, int n) {
	int temp;
	for (int i = 0; i < n - 1; i++)
		for (int j = i; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
}


int main() {

	int n;
	int* arr, * chan, * le;
	int chanVt = 0, leVt = 0;
	cin >> n;
	arr = new int[n];
	chan = new int[n];
	le = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] % 2 == 0)
			chan[chanVt++] = arr[i];
		else if (arr[i] % 2 != 0)
			le[leVt++] = arr[i];
	}

	sapXep(chan, chanVt);
	sapXep(le, leVt);
	for (int i = 0; i < chanVt; i++) {

		cout << chan[i] << " ";
	}
	for (int i = 0; i < leVt; i++) {
		cout << le[i] << " ";
	}


	delete[] arr;
	delete[] le;
	delete[] chan;



	return 0;
}