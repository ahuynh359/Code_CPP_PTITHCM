
#include <iostream>
#include<math.h>
using namespace std;

int chan(long long int n) {
    int so = 0;
    while (n > 0) {
        if ((n % 10) % 2 == 0)
            so++;
        n /= 10;
    }
    return so;
}
int le(long long int n) {
    int so = 0;
    while (n > 0) {
        if ((n % 10) % 2 != 0)
            so++;
        n /= 10;    
    }
    return so;
}

int main() {
    int  soBoTest;
    long long int n;
    cin >> soBoTest;

   

    for (int k = 0; k < soBoTest; k++) {
        cin >> n;
        cout << le(n) << " " << chan(n) << endl;



    }

}
