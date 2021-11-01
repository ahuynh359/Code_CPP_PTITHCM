

#include <iostream>
#include<math.h>
using namespace std;

void soChinhPhuong(long long int a, long long int b) {
	//get the first number
	long long int number = ceil(sqrt(a));
	long long int dem = 0;
	//get the first square 
	long long int n2 = number * number;
	//Space for the next number;
	number = number * 2 + 1;
	while (n2 <= b) {

		
		dem++;
		n2 = n2 + number;
		number += 2;
		
	}
	cout << dem << endl;
	number = ceil(sqrt(a));
	n2 = number * number;
	number = number * 2 + 1;

	while (n2 <= b) {

		cout << n2 << endl;
		dem++;
		n2 = n2 + number;
		number += 2;

	}

	
}
int main()
{
	long long int m, n;
	cin >> m >> n;
	soChinhPhuong(m, n);
}

