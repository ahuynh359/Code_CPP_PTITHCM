
#include <iostream>
#include<math.h>
using namespace std;

bool SNT(int n) {
    if (n < 2)
        return false;
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
        return false;
    for (int i = 2; i <= trunc(sqrt(n)); i++)
        if (n % i == 0)
            return false;
    return true;
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
       
        for (int i = 0; i < n; i++) 
            if (SNT(arr[i]))
                cout << arr[i] << " ";
        
        cout << endl;


    }

}
