
#include <iostream>
using namespace std;

int giaiThua(int n) {
	int p = 1;
	for (int i = 1; i <= n; i++)
		p *= i;
	return p;
}

int soStrong(int n) {
	int s = 0;
	int so = n;
	while (n > 0) {
		s += giaiThua(n % 10);
		n /= 10;
	}
	if (s == so)
		return 1;
	return 0;
}

int main()
{
	int n, dem = 0;
	cin >> n;
	for (int i = 1; i < n; i++) {
		if (soStrong(i))
			cout << i << " ";
	}

}


