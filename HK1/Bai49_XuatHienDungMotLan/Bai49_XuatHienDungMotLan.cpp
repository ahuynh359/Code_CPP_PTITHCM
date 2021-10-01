
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
void ouputFile(const char* fileName, int n, int* arr) {
	ofstream ofs(fileName);
	for (int i = 1; i < n; i++) {
		ofs << arr[i] << " ";
		cout << arr[i] << " ";
	}
	ofs.close();
}



void demSo(int n, int* arr, int* re, int& vt) {
	int dem = 0;
	vt = 0;
	vt++;
	int so;
	for (int i = 0; i < n; i++) {
		dem = 0;
		so = arr[i];
		for (int j = 0; j < n; j++) {
			if (arr[j] == arr[i])
				dem += 1;




		}
		if (dem == 1) {
			re[vt] = so;
			vt++;
		}

	}
}



int main()
{
	size_t n;
	int vt;
	int* arr = new int[100];
	int* result = new int[100];
	readFile("C:\\Users\\ASUS\\Desktop\\CodePTIT\\41..50\\Bai49_XuatHienDungMotLan\\Data.txt", n, arr);

	demSo(n, arr, result, vt);


	ouputFile("C:\\Users\\ASUS\\Desktop\\CodePTIT\\41..50\\Bai49_XuatHienDungMotLan\\Result.txt", vt, result);


}

