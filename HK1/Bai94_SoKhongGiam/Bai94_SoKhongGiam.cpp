

#include <iostream>
using namespace std;
bool soKhongGiam(long long int n) {
	int soThuNhat, soThuHai;

	while (n > 0) {
		soThuNhat = n % 10;
		n /= 10;
		soThuHai = n % 10;

		if (soThuNhat < soThuHai)
			return false;

		n /= 10;
	
	}
	return true;


}
int main()
{	
	int soboTest;
	long long int n;

	cin >> soboTest;

	for (int k = 0; k < soboTest; k++) {
		cin >> n;

		if (soKhongGiam(n))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}

	
	
	
}

