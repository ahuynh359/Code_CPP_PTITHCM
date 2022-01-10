#include<string>
#include <iostream>

using namespace std;

void chuanHoa(string& s) {
	while (s[0] == ' ')
		s.erase(0, 1);
	while (s[s.length() - 1] == ' ')
		s.erase(s.length() - 1, 1);
	for (int i = 0; i < s.length() - 1; i++)
		if (s[i] == ' ' && s[i + 1] == ' ') {
			s.erase(i, 1);
			i--;
		}
}

string daoNguoc(string s) {
	string kq;
	for (int i = s.length() - 1; i >= 0; i--)
		kq += s[i];
	return s;
}
int main()
{
	int t;
	string s;
	cin >> t;

	cin.ignore();
	while (t--) {

		getline(cin, s);
		string kq;
		while (s.rfind(" ") != -1) {
			kq += daoNguoc(s.substr(s.rfind(" ") +1, s.length() - s.rfind(" ")))+" ";
			s.erase(s.rfind(" "), s.length() - s.rfind(" "));
		}
		kq += daoNguoc(s);

		cout << kq << endl;
		kq= "";

	}
}
