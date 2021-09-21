#include<math.h>
#include <iostream>
using namespace std;
int main()
{
	int t;
	int x, y;
	long long int p;
	cin >> t;

	while (t--) {
		cin >> x >> y >> p;
		long long int s = 1;
		for (int i = 1; i <= y; i++)
			s = (s * x) % p;

		cout << s << endl;


	}


}