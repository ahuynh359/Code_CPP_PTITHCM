

#include <iostream>
#include<map>
#include<set>
using namespace std;

int main()
{
	int t, n, * arr;
	set<int> dem;
	cin >> t;
	while (t--) {
		cin >> n;
		arr = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] > 0)
				dem.insert(arr[i]);
		}


		int i = 1;
		for (auto j : dem) {
			if (j != i)
				break;
			else
				i++;
		}

		
		cout << i<<endl;
		



		

		dem.clear();
		delete[]arr;
	}
}

