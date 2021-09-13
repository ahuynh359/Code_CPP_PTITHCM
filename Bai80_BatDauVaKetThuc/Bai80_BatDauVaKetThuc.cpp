#include <iostream>

using namespace std;
int chuSoDau(int n) {
	while (n > 10) {
		n /= 10;
	}
	return n;
}

int chuSoCuoi(int n) {
	return n % 10;
}
int main() {
	int a;
	int soBoTest;
	cin >> soBoTest;
	for (int i = 0; i < soBoTest; i++)
	{
		cin >> a;

		if (chuSoCuoi(a) == chuSoDau(a))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}

	return 0;
}