#include<iostream> 
#include<string>
#include<math.h>
using namespace std;

int chuyenDoi(string s) {
	if (s.find("00") == 0)
		return 0;
	if (s.find("01") == 0)
		return 1;
	if (s.find("02") == 0)
		return 2;
	return 3;
}

bool KT(string s) {
	long long int even = 0, odd = 0;
	if (s.length() % 2 != 0)
		s = "0" + s;
	int isOddDigit = 1;
	for (size_t i = 0; i < s.length(); i += 2) {
		if (isOddDigit)
			even += chuyenDoi(s.substr(i, 2));
		else
			odd += chuyenDoi(s.substr(i, 2));

		isOddDigit ^= 1;

	}

	return (abs(even - odd)) % 5 == 0;
}
int main() {

	int t;
	string s;
	cin >> t;
	cin.ignore();
	while (t--) {
		getline(cin, s);
		if (KT(s))
			cout << "YES";
		else
			cout << "NO";
		cout << endl;

	}
	return 0;
}