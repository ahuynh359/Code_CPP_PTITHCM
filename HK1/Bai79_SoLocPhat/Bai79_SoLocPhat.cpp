#include <iostream>

using namespace std;
bool soLocPhat(long long int n) {

	while (n > 0) {
		int r = n % 10;
		if (r != 8 && r != 6 && r != 0)
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


		if (soLocPhat(a))
			cout << "YES"<<endl;
		else
			cout << "NO"<<endl;

	}
	
	return 0;
}
