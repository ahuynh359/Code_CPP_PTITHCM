#include<math.h>

#include <iostream>
// 2^(p-1)*(2^p-1)
// 2^(p-1) is a prime number and so is p

bool SNT(long long int n) {
	if (n < 2)
		return false;
	if (n == 2 || n == 3 || n == 5 || n == 7)
		return true;
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		return true;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;

}

bool kiemTraSoHoanHao(long long int n) {
	//Calculate 2^p-1
	long long int root = sqrt(n);
	//Calculate p-1
	long long int p = log(root) / log(2);
	return SNT(p + 1) && SNT(pow(2, p + 1) - 1) && (pow(2, p) * (pow(2, p + 1) - 1) == n);
}
using namespace std;
int main()
{
	int t;
	long long int n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << kiemTraSoHoanHao(n) << endl;

	}
}
