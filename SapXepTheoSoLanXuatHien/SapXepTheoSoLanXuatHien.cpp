#include<map>
#include <iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;

bool sortByVal(const pair<int, int>& a,
	const pair<int, int>& b)
{
	return (a.second > b.second);
}


int main()
{
	int t, n, * arr;
	map<int, int>dem;
	cin >> t;
	while (t--) {
		cin >> n;
		arr = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			dem[arr[i]]++;
		}



		vector<pair<int, int>> vec;
		map<int, int> ::iterator it2;
		for (it2 = dem.begin(); it2 != dem.end(); it2++)
		{
			vec.push_back(make_pair(it2->first, it2->second));
		}


		sort(vec.begin(), vec.end(),sortByVal);


		for (int i = 0; i < vec.size(); i++)
		{
			for (int j = 0; j < vec[i].second; j++)
				cout << vec[i].first << " ";
		}
		cout << endl;
		dem.clear();
		delete[]arr;
	}
}

