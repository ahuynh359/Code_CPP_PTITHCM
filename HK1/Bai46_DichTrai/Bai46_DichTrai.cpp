
#include <iostream>
#include<fstream>
using namespace std;

void readFile(const char* fileName, size_t &n, int* arr,size_t &d) {
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
		ofs << arr[i]<<" ";
	}
	ofs.close();
}


void dichTrai(int n, int* arr,int d) {
	int temp = arr[0];
	int j = 0;
	while (true) {
		int k = j + d;
		if (k >= n)
			k -= n;
		if (k == 0)
			break;
		arr[j] = arr[k];
		j = k;
	}
	arr[j] = temp;
	
	
}
	


int main()
{
	size_t n,d;
	int* arr = new int[100];
	readFile("C:\\Users\\ASUS\\Desktop\\CodePTIT\\41..50\\Bai46_DichTrai\\Data.txt",n,arr,d);
	dichTrai(n, arr, d);
	ouputFile("C:\\Users\\ASUS\\Desktop\\CodePTIT\\41..50\\Bai46_DichTrai\\Result.txt", n, arr);

	
}

