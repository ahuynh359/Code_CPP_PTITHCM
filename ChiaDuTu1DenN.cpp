

#include <iostream>
using namespace std;
int main()
{
	int t, n;
	long long int k;
	long long int soDu,tongK;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		tongK = (k - 1) * k / 2;
		soDu = n - (n / k) * k;
		soDu = soDu * (soDu + 1) / 2;
		cout << tongK*(n/k)+soDu<<endl;
	}

}

