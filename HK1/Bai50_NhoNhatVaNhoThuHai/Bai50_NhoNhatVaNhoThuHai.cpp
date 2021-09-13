
#include <iostream>
using namespace std;


int main() {
    int n, * arr;
    int min1, min2;
    arr = new int[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (arr[0] < arr[1]) {
        min1 = arr[0];
        min2 = arr[1];
    }
    else {
        min2 = arr[0];
        min1 = arr[1];

    }

    cout << min1 << " " << min2 << endl;

    for (int i = 2; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        }
        else
            if (arr[i] < min2 && arr[i]>min1)
            {
                min2 = arr[i];

            }


    }

    cout << min1 << " " << min2;
    return 0;
}
