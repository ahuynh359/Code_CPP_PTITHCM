#include<string>
#include <iostream>
#include<map>
using namespace std;

bool KT(string s, char x) {
	for (int i = 0; i < s.length(); i++)
		if (s[i] == x)
			return true;
	return false;
}


int main()
{
	int t;
	string s;
	cin >> t;
	map<char, int>dem;
	cin.ignore();
	while (t--) {
		getline(cin, s);
		string kq="";
		char kiTu;

		for (int i = 0; i < s.length(); i++) {
			dem[s[i]]++;
			if (KT(kq, s[i]) == false)
				kq += s[i];

		}

		for (int i = 0; i < kq.length(); i++)
			if (dem[kq[i]] == 1)
				cout << kq[i];
		cout << endl;
		dem.clear();

	}
}
