#include <iostream>
using namespace std;

void soChanSoLe(int n, int& soChan, int& soLe) {

	while (n > 0) {

		if ((n % 10) % 2 == 0)
			soChan++;
		else soLe++;
		n = n / 10;

	}
}
int main()
{
	int n, soChan, soLe;
	cin >> n;
	soChanSoLe(n, soChan, soLe);
	cout << soChan << endl << soLe;
}

