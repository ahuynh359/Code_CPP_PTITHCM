#include<iostream>
using namespace std;
int charToInt(char s) {
	return s - '0';
}


bool uuTheLe(string s) {

	if (charToInt(s[s.length() - 1]) % 2 == 0)
		return false;
	int chan = 0, le = 0;
	for (int i = 0; i < s.length(); i++)
		if (charToInt(s[i]) % 2 == 0)
			chan++;
		else
			le++;
	if (chan < le)
		return true;
	return false;

}

int main() {
	int soBoTest;
	cin >> soBoTest;
	string s;

	for (int k = 0; k < soBoTest; k++) {
		cin >> s;


		if (uuTheLe(s))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;



	}

	return 0;
}