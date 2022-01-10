
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < i; j++) cout << "~";
		if (i == 0 || i == a - 1)
			for (int j = 0; j < b; j++) cout << "*";
		else {
			cout << "*";
			for (int j = 0; j < b - 2; j++)
				cout << ".";
			cout << "*";

		}



		cout << endl;
	}
}

