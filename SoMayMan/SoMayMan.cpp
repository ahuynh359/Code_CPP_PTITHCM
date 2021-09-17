#include<string>
#include <iostream>
using namespace std;
int main()

{
	int t;
	long long int n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << (n % 100 == 86);
		cout << endl;
	}
}

