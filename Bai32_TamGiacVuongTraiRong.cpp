#include <iostream>
using namespace std;
int main()
{
	int h;
	cin >> h;
	if (h >= 1)
		cout << "*" << endl;
	for (int i = 1; i < h - 1; i++) {
		cout << "*";
		for (int j = 0; j < i - 1; j++) {
			cout << ".";
		}

		cout << "*" << endl;



	}

	for (int i = 0; i < h; i++) {
		cout << "*";
	}
}