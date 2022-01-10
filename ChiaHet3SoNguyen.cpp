#include<iostream>
#include <string>
#include<iomanip>
#include<math.h>
#include<algorithm>
#include<regex>

using namespace std;


long long int GCD(long long int a, long long int b) {
    while (b != 0) {
        long long int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long int LCM(long long int a, long long int b) {
    return a / GCD(a, b) * b;
}

int main() {

    int t, x, y, z, n;
    cin >> t;
    while (t--) {
        cin >> x >> y >> z >> n;
        long long int o = ceil(pow(10, n - 1) / (LCM(LCM(x, y), z)));

        if (o * (LCM(LCM(x, y), z)) >= pow(10, n))
            cout << -1;
        else
            cout << o * (LCM(LCM(x, y), z));


        cout << endl;
    }


}