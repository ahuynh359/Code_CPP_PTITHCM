#include<iostream>
using namespace std;

int UCLN(int a, int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	int a, b;
	cin >> a >> b;
	
	for (int i = a; i < b; i++) {
		for (int j = i+1; j <= b; j++) {
			if (UCLN(i, j) == 1) 
				cout << "(" << i << "," << j << ")" << endl;
			
		}
	}
}