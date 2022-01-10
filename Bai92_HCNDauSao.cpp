
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		if(i == 0 || i == b-1)
		for (int j = 0; j < a; j++)
			cout << "*";
		else {
			cout << "*";
			for (int j = 0; j < a - 2; j++)
				cout << " ";
			cout << "*";
		}
			

		cout << "\n";
		
	}
}

