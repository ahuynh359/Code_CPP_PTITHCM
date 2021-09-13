#include <iostream>

using namespace std;

int main() {
	long long int n,s=0,gt=1;
	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		gt*=i;
		s += gt;
	}

	cout <<  s;
	return 0;
}
