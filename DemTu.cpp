#include<string>
#include <iostream>
using namespace std;

void chuanHoaXau(string& s) {

	
	if (s[0] == ' ' || s[0] == '\t' || s[0] == '\n')
		s.erase(0, 1);

	while (s[s.length() - 1] == ' ' || s[s.length() - 1] == '\t' || s[s.length() - 1] == '\n')
		s.erase(s.length() - 1, 1);

	for (int i = 0; i < s.length() - 1; i++)
		if ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && (s[i + 1] == ' '|| s[i+1] == '\t' || s[i+1] == '\n')) {
			s.erase(i, 1);
			i--;
		}
}
int main()
{
	string s;
	int dem, t;
	cin >> t;
	cin.ignore();
	while (t--) {

		getline(cin, s);
		chuanHoaXau(s);

		dem = 1;

		for (int i = 0; i < s.length(); i++)
			if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
				dem++;

		cout << dem << endl;
	}



}

