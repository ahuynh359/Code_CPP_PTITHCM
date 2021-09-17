
#include <iostream>
using namespace std;
int main()
{
	int t, m, n, ** arr;
	bool** check;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		arr = new int* [n];
		check = new bool* [n];

		for (int i = 0; i < n; i++) {
			arr[i] = new int[m];
			check[i] = new bool[m] {false};
		}

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++) {
				cin >> arr[i][j];
				if (arr[i][j] == 1)
					check[i][j] = true;
			}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				if (arr[i][j] == 1) {
					for (int k = 0; k < m; k++)
						check[i][k] = true;
					for (int k = 0; k < n; k++)
						check[k][j] = true;
				}

		}


		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
				if (check[i][j])
					cout << 1 << " ";
				else
					cout << 0 << " ";
			cout << endl;
		}

		for (int i = 0; i < n; i++) {
			delete arr[i];
			delete check[i];
		}
		delete[]arr;
		delete[]check;
	}

}
