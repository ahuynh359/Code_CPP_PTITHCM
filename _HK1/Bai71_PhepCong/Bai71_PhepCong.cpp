#include <iostream>
#include<string>
#include <string>
#include <stdlib.h>
using namespace std;

int chuyen(char n) {
	return n - '0';
}
int main() {
	string s;
	getline(cin, s);

	if (chuyen(s[0]) + chuyen(s[4]) == chuyen(s[8]))

		cout << "YES";
	else
		cout << "NO ";

	return 0;
}