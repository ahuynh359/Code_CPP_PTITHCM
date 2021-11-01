#include<iostream>
#include<math.h>
using namespace std;
bool SNT(int n) {
    if (n < 2)
        return false;
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    return false;

}
bool KT(int arr[], int n, int d) {
    for (int i = 0; i < n; i++)
        if (arr[i] == d)
            return false;
    return true;
}
int demS(long long int n) {
    int dem1 = 0;
    while (n > 0) {
        dem1++;
        n /= 10;
    }
    return dem1;
}
void demSo(long long int n) {
    int dem[10];
    int thuTu[10];
    int k = demS(n) - 1;
    long long int b = n;
    int vt = 0;
    while (k >= 0) {
        if (SNT(n / pow(10, k))) {
            if (KT(thuTu, vt, n / pow(10, k))) {
                thuTu[vt] = n / pow(10, k);
                vt++;

            }

        }
        n = n % (long long int)pow(10, k);
        k--;


    }


    for (int i = 0; i < 10; i++) {
        dem[i] = 0;


    }

    while (b > 0) {
        if (SNT(b % 10)) {
            dem[b % 10]++;


        }
        b /= 10;
    }

    for (int i = 0; i < vt; i++)
        cout << thuTu[i] << " " << dem[thuTu[i]] << endl;
}

int main() {
    long long int n;
    cin >> n;

    demSo(n);

}