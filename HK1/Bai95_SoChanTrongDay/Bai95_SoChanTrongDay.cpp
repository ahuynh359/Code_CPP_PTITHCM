
#include <iostream>
#include<math.h>
using namespace std;


int main() {
    int n, soBoTest;
    cin >> soBoTest;

    int* arr;
    arr = new int[100];

    for (int k = 0; k < soBoTest; k++) {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
            if (arr[i] % 2 == 0)
                cout << arr[i] << " ";

        cout << endl;


    }

}
