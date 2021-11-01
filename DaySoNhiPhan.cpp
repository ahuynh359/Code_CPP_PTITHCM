// C++ program to find largest subarray
// with equal number of 0's and 1's.
#include <iostream>
#include<unordered_map>


using namespace std;


int longestCommonSum(const bool* arr1, const bool* arr2, int n) {

    int *arr = new int [n];
    for (int i = 0; i < n; i++)
        arr[i] = arr1[i] - arr2[i];

    unordered_map<int, int> hM;

    int sum = 0;
    int max_len = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum == 0)
            max_len = i + 1;
        if (hM.find(sum) != hM.end())
            max_len = max(max_len, i - hM[sum]);

        else
            hM[sum] = i;
    }

    return max_len;
}

int main() {
    int t, n;
    bool* arr1, * arr2;
    cin >> t;
    while (t--) {
        cin >> n;
        arr1 = new bool[n];
        arr2 = new bool[n];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
            cin >> arr2[i];
        cout << longestCommonSum(arr1, arr2, n);
        cout << endl;
        delete[]arr1;
        delete[] arr2;
    }
    return 0;
}