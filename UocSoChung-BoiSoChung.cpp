
#include <iostream>
using namespace std;

long long int GCD( int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}


long long int LCM( int a,  int b) {
	return (a / GCD(a, b)) * b;

}
int main()
{
	int t;
	int a, b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		cout << LCM(a, b) << " " << GCD(a, b)<<" "<<endl;
	}
}

