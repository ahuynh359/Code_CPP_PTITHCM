#include<math.h>
#include<iomanip>
#include <iostream>

using namespace std;

int main() {

    double a, b, c;
    cin >> a >> b >> c;

    double delta = b * b - 4 * a * c;
    if (a == 0) {
        if (b == 0)
            cout << "NO";
        else
            cout << setprecision(2) << fixed << -c / b;

    }
    else {
        if (delta > 0)
            cout << setprecision(2) << fixed << ((-b + sqrt(delta)) / 2 * a) << "\n" << ((-b - sqrt(delta)) / 2 * a)
            << endl;
        else if (delta == 0)
            cout << setprecision(2) << fixed << (-b / 2 * a) << endl;
        else
            cout << "NO";
    }


}

