
#include <iostream>
using namespace std;

int max(const int* arr, int n) {
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}


int main() {
    int n, soBoTest;
    cin >> soBoTest;
    int* arr;
    arr = new int[100];
    for (int k = 0; k < soBoTest; k++) {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << max(arr, n) << endl;
        for (int i = 0; i < n; i++) {
            if (arr[i] == max(arr, n))
                cout << i << " ";
        }
        cout << endl;


    }
	
}
