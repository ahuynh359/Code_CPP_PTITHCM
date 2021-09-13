
#include <iostream>
#include<set>
#include<string>
using namespace std;

bool KT(string* kq, int n,string d) {
	for (int i = 0; i < n; i++)
		if (kq[i] == d)
			return true;
	return false;
}
int main()
{
	string *kq;
	string s;
	//getline(cin,s);
	kq = new string[100];
	int vt = 0;
	s = "mon thcs2 hoc la mon 2tc hoc";
	s += " ";





	while ((int)s.find(" ") != -1 || s.length() > 0) {
	if (KT(kq, vt, s.substr(0, s.find(" ") )) == false) {
			kq[vt] = (s.substr(0, s.find(" ") ));
			vt++;
		}
		s.erase(0, s.find(" ") + 1);
		
	}
	
	


	for (int i = 0; i < vt; i++)
		cout << kq[i]<<" ";

}

