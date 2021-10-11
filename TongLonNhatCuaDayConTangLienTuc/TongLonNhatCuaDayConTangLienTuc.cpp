#include<iostream>

using namespace std;

int min(int a, int b) {
    return a < b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int t, n;
    long long int* arr, * dp, res, m;
    cin >> t;
    while (t--) {
        cin >> n;
        arr = new long long int[n];
        bool ktd = false;
        //Neu ko co pt duong thi in ra so am lon nhat
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] > 0)
                ktd = true;
            if (i == 0)
                m = arr[0];
            else if (m < arr[i])
                m = arr[i];

        }

        if (!ktd) {
            cout << m << '\n';


        }
        else {
            m = 0;
            res = arr[0];
            for (int i = 0; i < n; i++) {
                if (m + arr[i] < 0) {
                    m = 0;
                    continue;
                }
                m += arr[i];
                if (res < m)res = m;
            }

            cout << res << '\n';
        }


        delete[]arr;


    }

}