#include <iostream>

using namespace std;

int main() {



    int n;
    int* arr;
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        ifs >> arr[i];
    }

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }



    return 0;
}