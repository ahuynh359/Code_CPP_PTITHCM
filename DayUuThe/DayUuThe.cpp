
#include <iostream>
#include<algorithm>
using namespace std;

bool ktSoChan(int* arr, int vt) {

	for (int i = 0; i < vt - 1; i++) {
		if (arr[i] % 2 == 0 && arr[i + 1] % 2 || arr[i] % 2 != 0)
			return false;


		return true;
	}
}
bool ktSoLe(int* arr, int vt) {

	for (int i = 0; i < vt - 1; i++) {
		if (arr[i] % 2 == 0 && arr[i + 1] % 2 || arr[i] % 2 != 0)
			return false;


		return true;
	}
}
int main()
{
	int t, * arr;
	cin >> t;
	while (t--) {
		arr = new int[201];
		int i = 0;
		while (cin >> arr[i++]);
		sort(arr, arr + i);




		delete[]arr;
	}

}

