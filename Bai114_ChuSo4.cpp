#include<iostream>
using namespace std;


bool KT(int n) {
	int sum = 0;
	while (n > 0) {
		if ((n % 10) == 4)
			return false;
		else
			sum += n % 10;
		n /= 10;

	}
	

	if (sum % 10 == 0)
		return true;
	return false;

}

bool soThuanNghich(int n) {
	int so = 0, tam = n;
	while (n > 0) {
		so = so * 10 + n % 10;
		n /= 10;
	}

	if (so != tam)
		return false;
	return true;
}


int main() {
	int soBoTest, s;
	cin >> soBoTest;


	int batDau, ketThuc;
	for (int k = 0; k < soBoTest; k++) {
		batDau = 1;
		cin >> s;
		for (int i = 0; i < s - 1; i++)
			batDau = batDau * 10;
		ketThuc = batDau * 10;

		for (int i = batDau; i < ketThuc; i++)
			if (soThuanNghich(i) && KT(i))
				cout << i << " ";
		cout << endl;


	}

	return 0;
}