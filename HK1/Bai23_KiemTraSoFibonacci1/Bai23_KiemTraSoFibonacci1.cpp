#include <iostream>
#include<math.h>
using namespace std;

int square(int n) {
	int s = trunc(sqrt(n));
	return
		n == s * s;

}

int soFibon(int n) {
	if (n < 1)
		return 0;
	return square(5 * n * n + 4) | square(5 * n * n - 4);
}
int main()
{

	int n;
	cin >> n;
	cout << soFibon(n);


}