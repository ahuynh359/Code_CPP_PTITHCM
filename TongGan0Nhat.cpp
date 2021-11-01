#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;
#define MAX 2147483647


int main()
{

	int t, n, * arr;

	cin >> t;
	while (t--) {
		cin >> n;
		arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];


		long long int min = MAX;
		for (int i = 0; i < n - 1; i++)
			for (int j = i + 1; j < n; j++)
				if (abs(min) > abs(arr[i] + arr[j]))
					min = arr[i] + arr[j];
		cout << min << endl;
		delete[]arr;
	}
}
