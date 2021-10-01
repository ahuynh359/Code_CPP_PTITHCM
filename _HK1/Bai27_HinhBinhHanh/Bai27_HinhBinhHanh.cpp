


#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) cout << "~";
		for (int j = 0; j < n; j++)cout << "*";
		cout << "\n";
	}
}

