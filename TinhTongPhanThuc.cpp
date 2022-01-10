#include <iostream>
#include<iomanip>
using namespace std;
int main() {
	int n;
	double s = 0.0;
	cin >> n;

	for (int i = 1; i <= n; i++)
		s += double(1) / double(i);
	cout << setprecision(4) << fixed << s;

}