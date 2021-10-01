#include <iostream>
#include<math.h>
using namespace std;
bool SCP(long long int n) {
	long long int s = sqrt(n);
	return s * s == n;
}
int main() {
	int soBoTest;
	long long int n;
	cin >> soBoTest;
	for (int k = 0; k < soBoTest; k++) {
		cin >> n;
		if (SCP(n))
			cout << "YES" << endl;
		else
			cout << "NO"<<endl;
	}
	
	return 0;
}
