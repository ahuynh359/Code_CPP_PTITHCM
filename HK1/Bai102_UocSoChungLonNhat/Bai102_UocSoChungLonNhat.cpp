
#include <iostream>
using namespace std;
int UCLN(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main() {
	int soBoTest;
	cin >> soBoTest;
	int a, b;
	for (int i = 0; i < soBoTest; i++) {
		cin >> a >> b;
		cout << UCLN(a, b) << endl;
	}
}