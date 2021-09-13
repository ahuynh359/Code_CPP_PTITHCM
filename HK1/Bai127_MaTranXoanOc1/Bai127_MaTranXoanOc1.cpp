
#include <iostream>
using namespace std;
int main()
{	
	int n;
	cin >> n;
	int arr[100][100];
	int d = 0, gt = 1, hang = n - 1, cot = n - 1;
	while (d <= n / 2) {
		for (int i = d; i <= cot; i++) arr[d][i] = gt++;
		for (int i = d + 1; i <= hang; i++) arr[i][cot] = gt++;
		for (int i = cot - 1; i >= d; i--) arr[hang][i] = gt++;
		for (int i = hang - 1; i > d; i--) arr[i][d] = gt++;
		d++;
		hang--;
		cot--;
	}

	for (int i = 0;		i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	
	
}
