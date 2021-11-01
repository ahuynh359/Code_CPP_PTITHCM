#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if (b <= 0)
		cout << "0";
	else
	{
		cout << a + b << endl;
		cout << a - b << endl;
		cout << a * b << endl;
		float f = a / b;
		cout << setprecision(1) << fixed << f;
		cout << a % b;

	}

}

