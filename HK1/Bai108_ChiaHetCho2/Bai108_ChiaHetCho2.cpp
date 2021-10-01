#include<iostream>
#include <math.h>

using namespace std;


long long int dem(long long int n) {
    long long int count = 0, i;
    for (i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i % 2 == 0)
                count++;
            if ((n / i) % 2 == 0)
                count++;

        }

    }
    i--;
    if (i * i == n && i % 2 == 0)
        count--;

    return count;

}
int main() {

    int soBoTest;
    cin >> soBoTest;
    long long int n;
    for (int k = 0; k < soBoTest; k++) {
        cin >> n;
        cout << dem(n) << endl;
    }


}
