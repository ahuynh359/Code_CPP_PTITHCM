#include <iostream>
#include<math.h>
using namespace std;

long long int tong(long long int n) {
	long long int s = 0;
	while (n > 0) {
		s += n % 10;
		n /= 10;

	}
	return s;
}
bool chiaHet(long long int n) {
	if (tong(n) % 10 == 0)
		return true;
	return false;
}
int main() {
	
	int soBoTest;
	long long int n;
	cin >> soBoTest;

	for (int k = 0; k < soBoTest; k++) {
		cin >> n;
		if (chiaHet(n))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
	return 0;
}
