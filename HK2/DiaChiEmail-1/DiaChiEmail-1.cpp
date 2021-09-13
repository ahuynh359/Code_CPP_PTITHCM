#include<math.h>	
#include<string>
#include <iostream>
using namespace std;


int main()
{
	string s, kq;
	getline(cin, s);


	int i = s.length() - 1;
	if (s.find(" ") != -1)
	{
		while (s[i] != ' ')
			i--;

		kq += s.substr(i + 1, s.length() - i);
		s.erase(i, s.length() - i);

		kq += s[0];

		while (s.find(" ") != -1) {

			kq += s[s.find(" ") + 1];
			s.erase(0, s.find(" ") + 1);

		}
	}
	else
		kq = s;

	for (int i = 0; i < kq.length(); i++)
		kq[i] = tolower(kq[i]);
	kq += "@ptit.edu.vn";
	cout << kq;


}

