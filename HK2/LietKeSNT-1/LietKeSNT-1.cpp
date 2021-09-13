
#include <iostream>
#include<math.h>
using namespace std;

bool SNT(int n) {
	if (n < 2)
		return false;
	if (n == 2 || n == 3 || n == 5 || n == 7)
		return true;
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a, b;
	cin >> a >> b;
	if (a > b)
		swap(a, b);


	for (int i = a; i <= b; i++)
		if (SNT(i))
			cout << i << " ";
}

