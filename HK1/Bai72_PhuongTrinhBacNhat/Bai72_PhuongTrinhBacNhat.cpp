#include <iostream>
#include<iomanip>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;

	if (a == 0) {
		if (b == 0)
			cout << "Vo so nghiem";
		if (b != 0)
			cout << "Vo nghiem";
	}
	else
		cout << setprecision(2) << fixed << (float)-b / a;

	return 0;
}