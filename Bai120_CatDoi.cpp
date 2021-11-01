#include<iostream>
using namespace std;


int main() {
	int soBoTest;
	string s;
	cin >> soBoTest;
	bool Kt;
	for (int k = 0; k < soBoTest; k++) {
		Kt = false;
		cin >> s;
		int dem;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '8' || s[i] == '9')
				s[i] = '0';
		}
		int i = 0;
		while (s[i] == '0')
			i++;

		for (int j = i; j < s.length(); j++) {
			if (!(s[j] == '0' || s[j] == '1' || s[j] == '8' || s[j] == '9')) {
				Kt = true;
				break;
			}
			cout << s[j];

		}
		if (Kt || i == s.length())
			cout << "INVALID";
		cout << endl;

	}

	return 0;
}