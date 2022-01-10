#include <iostream>

using namespace std;

int main() {
	int a;
	char* arr;
	cin >> a;
	arr = new  char[a];
	for (int i = 0; i < a; i++)
		cin >> arr[i];
	for (int i = 0; i < a; i++) {
		if (arr[i] <= 'z' && arr[i] >= 'a')
			cout <<(char) (arr[i] - 32) << endl;
		if (arr[i] <= 'Z' && arr[i] >= 'A')
			cout <<(char) (arr[i] + 32);
	}

	return 0;
}