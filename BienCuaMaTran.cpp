

#include <iostream>
using namespace std;
int main()
{
	int t, n, ** arr;
	cin >> t;
	while (t--) {
		cin >> n;
		arr = new int* [n];
		for (int i = 0; i < n; i++)
			arr[i] = new int[n];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> arr[i][j];

		for (int i = 0; i < n; i++) {
			if (i == 0 || i == n - 1)
				for (int j = 0; j < n; j++)
					cout << arr[i][j] << " ";
			else {

				for (int j = 0; j < n; j++)
					if (j == 0 || j == n - 1)
						cout << arr[i][j] << " ";
					else
						cout << "  ";


			}
			cout << endl;
		}
		cout << endl;
		for (int i = 0; i < n; i++)
			delete arr[i];
		delete[]arr;
	}
}

