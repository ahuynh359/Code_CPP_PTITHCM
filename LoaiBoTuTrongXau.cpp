
#include <iostream>
#include<math.h>
#include<string>
using namespace std;


int main()
{
	string s,tu;
	getline(cin, s);
	getline(cin,tu);

	s += " ";
	while(s.find(tu) != -1)
		s.erase(s.find(tu), tu.length()+1);

	cout << s;
}

