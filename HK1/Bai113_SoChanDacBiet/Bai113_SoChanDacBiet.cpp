
#include <iostream>
using namespace std;
bool KT(long long int n) {

	while (n > 0) {
		if ((n % 10) % 2 != 0)
			return false;
		n /= 10;
	}
	return true;

}
int main() {
	int soBoTest;
	cin >> soBoTest;
	long long int a;
	for (int i = 0; i < soBoTest; i++) {
		cin >> a;
		if (((a % 10)% 2 == 0) && KT(a))
			cout << "YES" << endl; else
			cout << "NO" << endl;
	}
}