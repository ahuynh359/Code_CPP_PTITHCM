#include<map>
#include <iostream>
using namespace std;

void inMang(long long int* arr,long long  int n) {
	for (long long int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}
void xuLi(long long int * arr, long long  int n) {
	map<long long int, int> dem;

	dem.clear();
	
	for (long long i = 0 ; i < n; i++)
		dem[arr[i]]++;
	
	
	for (long long  i = 0; i < n; i++)
		if (dem[i] >= 1)
			arr[i] = i;
		else
			arr[i] = -1;
	inMang(arr, n);
}
int main()
{
	int t;
	long long int n, * arr;
	cin >> t;
	while (t--) {
		cin >> n;
		arr = new long long int[n];
		for (long long int i = 0; i < n; i++)
			cin >> arr[i];
		xuLi(arr, n);
		delete[]arr;
	}
}

