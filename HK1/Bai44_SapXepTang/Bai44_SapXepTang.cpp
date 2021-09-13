#include<iostream>
#include<fstream>
using namespace std;

void DocFile(const char* fileName, size_t& n, int* arr) {
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

void XuatFile(const char* fileName, int n, int* arr) {
	ofstream ofs(fileName);
	for (int i = 0; i < n; i++) {
		ofs << arr[i] << " ";
	}
	ofs.close();
}

void sapXepMang(int n, int* arr) {
	int temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

}

int main() {



	size_t n;
	int* arr;
	arr = new int[100];


	DocFile("C:\\Users\\ASUS\\Desktop\\CodePTIT\\41..50\\Bai44_SapXepTang\\Data.txt", n, arr);
	sapXepMang(n, arr);
	XuatFile("C:\\Users\\ASUS\\Desktop\\CodePTIT\\41..50\\Bai44_SapXepTang\\Result.txt", n, arr);

	return 0;
}