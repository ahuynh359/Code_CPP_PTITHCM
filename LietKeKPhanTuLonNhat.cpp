#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {

	int t, n, * arr,k;

	cin >> t;
	while (t--) {
		cin >> n>>k;
		arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		for(int i = n-1;i>n-k-1;i--)
			cout<<arr[i]<<" ";
			cout<<endl;

		delete[]arr;
	}
}