
#include <iostream>
#include<map>
using namespace std;
int main()
{
	int t, * arr, n;
	map<int, int>dem;
	cin >> t;
	while (t--) {
		cin >> n;
		arr = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			dem[arr[i]]++;
		}
		int count = 0;
		for (auto it : dem)
			if (it.second > 1)
				count += it.second;
		cout << count << endl;
		dem.clear();

		delete[]arr;
	}

}

  