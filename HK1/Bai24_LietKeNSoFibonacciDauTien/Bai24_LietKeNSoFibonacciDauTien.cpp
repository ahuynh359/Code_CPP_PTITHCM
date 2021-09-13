#include <iostream>
#include<math.h>
using namespace std;


void soFibon(int n, int* a) {


	a[0] = 0;
	a[1] = 1;
	a[2] = 1;

	cout << "0 1 1 ";

	for (int i = 3; i < n; i++) {
		a[i] = a[i - 1] + a[i - 2];
		cout << a[i] << " ";
	}

}


int main()
{

	int n, * a;

	cin >> n;
	a = new int[n];
	soFibon(n, a);



}