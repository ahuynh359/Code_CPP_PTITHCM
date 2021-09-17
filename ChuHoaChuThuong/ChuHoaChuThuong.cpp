#include<string>
#include <iostream>
using namespace std;
int main()

{
	int t;
	char x;
	cin >> t;
	while (t--) {
		cin >> x;
		if (x >= 'a' && x <= 'z')
			x = toupper(x);
		if (x >= 'A' && x <= 'Z')
			x = tolower(x);
		cout << x << endl;
	}

}


