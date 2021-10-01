
#include <iostream>
#include<math.h>
using namespace std;

bool STN(long long int n) {
    long long int so = 0, kq;
    kq = n;
    while (n > 0) {
        so = so * 10 + n % 10;
        n /= 10;
    }

    if (so == kq)
        return true;
    return false;
}

void sanNguyenTo(long long int a, long long int b) {
    bool* arr;
    int dem = 0;
    arr = new bool[b];
    for (int i = 0; i <= b; i++) {
        arr[i] = true;
    }
    arr[0] = false;
    arr[1] = false;

    for (int i = 2; i * i <= b; i++) {
        if (arr[i])
            for (int j = i * i; j <= b; j += i)
                arr[j] = false;
    }

    for (int i = a; i <= b; i++)
        if (arr[i] && STN(i)) {
            if (dem == 10)
            {
                printf("\n");
                dem = 0;
            }
            cout << i << " ";
            dem++;
        }


}


int main() {
    int  soBoTest;
    long long int a,b;

   cin >> soBoTest;
   for (int k = 0; k < soBoTest; k++) {
       cin >> a>> b;
       sanNguyenTo(a, b);
       cout << "\n";
   }

   
}
