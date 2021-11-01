#include <iostream>
#include <string>
#include <map>

using namespace std;


int main() {

    int n, dem;
    unsigned int** arr;
    int demThiet = 0;

    cin >> n;
    arr = new unsigned int* [n];

    for (int i = 0; i < n; i++)
        arr[i] = new unsigned int[3];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];




    for (int i = 0; i < n; i++) {
        dem = 0;
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == 1)
                dem++;
        }
        if (dem > 1)
            demThiet++;
    }
    cout << demThiet;

    for (int i = 0; i < n; i++)
        delete arr[i];
    delete[]arr;
}

