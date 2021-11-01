

#include <iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int t,dem;
	cin >> t;
	cin.ignore();
	while (t--) {
		getline(cin, s);
		dem = 0;
		for (int i = 0; i < s.length(); i++)
			for (int j = i; j < s.length(); j++)
				if (s[i] == s[j])
					dem++;
		cout << dem << endl;
	}
}

