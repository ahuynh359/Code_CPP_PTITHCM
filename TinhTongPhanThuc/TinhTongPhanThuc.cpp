#include <iostream>
#include<iomanip>
using namespace std;
int main() {
	int n;
	float s = 0.0;
	cin >> n;

	for (int i = 2; i <= n; i++)
		s += float(1) / float(i);
	cout << setprecision(4) << fixed << s;

}