
#include <iostream>
using namespace std;

void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int binarySearch(int* arr, int l,int r,int x) {

	while (l <= r) {
		int middle = l + (r - l) / 2;
		if (arr[middle] == x)
			return 1;
		else
			if (arr[middle] > x)
				r = middle - 1;
			else
				if (arr[middle] < x)
					l = middle + 1;
	}
	return -1;

}
int main()
{
	int viTri, n, x, * arr, t;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		cout << binarySearch(arr, 0, n-1, x) << endl;
		delete[]arr;
	}
}

