

#include <iostream>
#include<fstream>
using namespace std;

void readFile(const char* fileName, size_t& n, int* arr) {
	fstream ifs(fileName);
	if (ifs.fail()) {
		cout << "Loi";
	}

	ifs >> n;
	for (int i = 0; i < n; i++) {
		ifs >> arr[i];
	}



	ifs.close();
}
void ouputFile(const char* fileName, int lonNhat, int lonThuHai) {
	ofstream ofs(fileName);
	ofs << lonNhat << " " << lonThuHai;
	cout << lonNhat << " " << lonThuHai;
	ofs.close();
}


int main()
{
	size_t n;
	int max1, max2;
	int* arr = new int[100];
	readFile("C:\\Users\\ASUS\\Desktop\\CodePTIT\\41..50\\Bai48_LonNhatVaLonThuHai\\Data.txt", n, arr);


	if (arr[0] > arr[1]) {
		max1 = arr[0];
		max2 = arr[1];
	}
	else {
		max2 = arr[0];
		max1 = arr[1];
	}

	for (int i = 2; i < n; i++) {

		if (arr[i] > max1) {
			max2 = max1;
			max1 = arr[i];

		}
		else
			if (arr[i] > max2 && arr[i] < max1)

				max2 = arr[i];


	}

	ouputFile("C:\\Users\\ASUS\\Desktop\\CodePTIT\\41..50\\Bai48_LonNhatVaLonThuHai\\Result.txt", max1, max2);
}

