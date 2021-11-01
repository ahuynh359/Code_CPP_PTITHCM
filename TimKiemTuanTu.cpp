
#include <iostream>
using namespace std;
int main()
{
	int viTri,n,x,*arr,t;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		arr = new int[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		viTri = -1;
		for (int i = 0; i < n; i++)
			if (arr[i] == x) {
				viTri = i+1;
				break;
			}
		cout << viTri << endl;
		delete[]arr;
	}
}

