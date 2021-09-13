
#include <iostream>
using namespace std;
bool kiemTraSoDu(int n, long long int k) {
	long long int tongK,soLan;
	tongK = (k - 1) * k / 2;
	soLan = n- (n / k) * k;
	soLan = soLan * (soLan + 1) / 2;
	return (tongK * (n / k) + soLan) == k;

}
int main()
{
	int t,n;
	long long int k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		cout << kiemTraSoDu(n, k)<<endl;
	}
}

