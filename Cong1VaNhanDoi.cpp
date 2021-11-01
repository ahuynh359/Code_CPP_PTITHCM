#include<iostream>

using namespace std;


int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    long long int m, * arr,t;
    long long int tong;
    cin >> t;
    while (t--) {
        cin >> m;
        arr = new long long int[m];


        for (int i = 0; i < m; i++) 
            cin >> arr[i];

        
        int d = 0, tam = 0, cong1 = 0;
        for (int i = 0; i < m; i++) {
            tam = 0;
            long long int x = arr[i];
            while (x > 0) {
                if (x % 2 == 0) {
                    x /= 2;
                    tam++;

                }
                else {
                    x -= 1;
                    cong1++;
                }

            }
            d = max(d, tam);

        }


        cout << d + cong1 << "\n";
        delete[]arr;


    }

}