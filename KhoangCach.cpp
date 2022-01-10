#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main() {
    int t;
    double a, b, c, d;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> d;
        cout << setprecision(4) << fixed << sqrt(pow(c - a, 2) + pow(d - b, 2)) << endl;


    }
}