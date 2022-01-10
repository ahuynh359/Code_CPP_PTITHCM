#include<iostream>

#include<set>
using namespace std;

int main() {

	int t, n, * arr,min,*brr,so;
	set<int>dem;
	cin >> t;
	while (t--) {
		cin >> n;
		arr = new int[n];
		brr = new int[n];
		int vtB = 0;
		so = 0;
		for (int i = 0; i < n; i++){
			cin >> arr[i];
			dem.insert(arr[i]);
		}

		for (int i : dem) {
			brr[vtB++] = i;
			
		}

		for (int i = 0; i < vtB - 1; i++)
			if (brr[i] + 1 != brr[i + 1])
				so += brr[i + 1] - brr[i]-1;
		cout << so<<endl;
				


		
		

			dem.clear();
		delete[]arr;
		delete[]brr;


	}

}