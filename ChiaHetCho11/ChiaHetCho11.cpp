#include<string>
#include <iostream>
using namespace std;

bool chiaHet(string s) {
	long long int tong = 0;

	for (int i = 0; i < s.length(); i++)
		if (i % 2 == 0)
			tong += (s[i] - '0');
		else
			tong -= (s[i] - '0');
	return tong % 11 == 0;
}

int main()
{
	string s;
	int dem, t;
	cin >> t;
	cin.ignore();
	while (t--) {

		getline(cin, s);
		cout << chiaHet(s) << endl;
	}



}

