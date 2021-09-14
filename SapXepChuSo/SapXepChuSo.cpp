#include<iostream>
#include<set>
using namespace std;
void tachTungPhanTu(int n, set<int> &mang) {

	while (n > 0) {
		mang.insert(n % 10);
		n /= 10;
	}
}
int main() {

	int t, n;
	int* arr;
	set<int>mang;
	cin >> t;
	while (t--) {
		cin >> n;
		arr = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			tachTungPhanTu(arr[i], mang);

		}

		
		for (auto i : mang)
			cout << i<<" ";
		cout << endl;
		mang.clear();
		delete[]arr;
	}

}