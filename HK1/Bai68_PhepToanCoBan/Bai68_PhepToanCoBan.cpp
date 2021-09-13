#include <iostream>
#include<iomanip>
using namespace std;
int main() {
	long long int a, b;
	cin >> a >> b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	if (b == 0)
		cout << 0;
	else {
		cout << a / b << endl;
		cout << a % b << endl;
		cout << setprecision(2) << fixed << (float)a / b << endl;

	}
	
	return 0;
}
