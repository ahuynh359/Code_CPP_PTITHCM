#include <iostream>
#include<iomanip>
#include<math.h>

#define PI 3.141592653589793238
using namespace std;

void solve(double m, double n, double q, double k, double l, double z) {

    double s, r;
    double a = sqrt(pow((q - m), 2) + pow((k - n), 2));
    double b = sqrt(pow((l - q), 2) + pow((z - k), 2));
    double c = sqrt(pow((m - l), 2) + pow((n - z), 2));

    if (a + b > c && a + c > b && c + b > a) {
        s = 0.25 * sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b));
        r = (a * b * c) / (4 * s);
        cout << setprecision(3) << fixed << r * r * PI << endl;
    }
    else {

        cout << "INVALID" << endl;
    }
}

int main() {
    int t;
    double a, b, c, x, y, z;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> x >> y >> z;
        solve(a, b, c, x, y, z);
    }
}