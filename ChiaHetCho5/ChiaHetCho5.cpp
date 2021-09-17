#include<iostream> 
#include<string>
using namespace std;
void KT(string s) {
	int temp2 = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1') {
			if (i % 4 == 0)
				temp2 += 1;
			else if (i % 4 == 1)
				temp2 += 2;
			else if (i % 4 == 2)
				temp2 += 4; else
				if (i % 4 == 3)
					temp2 += 3;
		}
	}

	if (temp2 % 5 == 0 && temp2 != 0)
		cout << "YES";
	else
		cout << "NO";
	cout << endl;
}
int main() {
	int t;
	string s;
	cin >> t;
	cin.ignore();
	while (t--) {
		getline(cin, s);
		KT(s);

	}
	return 0;
}