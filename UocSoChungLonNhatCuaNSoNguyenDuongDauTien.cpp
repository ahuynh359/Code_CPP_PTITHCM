
#include <iostream>
using namespace std;

long long int GCD(long long int a,long long int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}


long long int LCM(long long int a,long long int b) {
	return (a / GCD(a, b)) * b;

}
int main()
{
	int t;
	long long int a;
	long long int s;
	cin >> t;
	while (t--) {
		cin >> a;
		s = 1;
		for (long long int i = 2; i <= a; i++)
			s = LCM(s,i);
		cout << s << endl;
	}
}

