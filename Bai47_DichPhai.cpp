
#include <iostream>
#include<fstream>
using namespace std;

void readFile(const char* fileName, size_t& n, int* arr, size_t& d) {
	fstream ifs(fileName);
	if (ifs.fail()) {
		cout << "Loi";
	}

	ifs >> n;
	for (int i = 0; i < n; i++) {
		ifs >> arr[i];
	}

	ifs >> d;

	ifs.close();
}
void ouputFile(const char* fileName, int n, int* arr) {
	ofstream ofs(fileName);
	for (int i = 0; i < n; i++) {
		ofs << arr[i] << " ";
	}
	ofs.close();
}



void dichPhai(int n, int* arr, int d) {
	
	int i = n - 1;
	int temp = arr[n - 1];
	while (1) {
		int k = i - d;
		if (k < 0)
			k += n;
		if (k == n - 1)
			break;
		arr[i] = arr[k];
		i = k;
	}
	arr[i] = temp;
}



int main()
{
	size_t n, d;
	int* arr = new int[100];
	readFile("C:\\Users\\ASUS\\Desktop\\CodePTIT\\41..50\\Bai47_DichPhai\\Data.txt", n, arr, d);
	
	dichPhai(n, arr, d);
	ouputFile("C:\\Users\\ASUS\\Desktop\\CodePTIT\\41..50\\Bai47_DichPhai\\Result.txt", n, arr);


}

