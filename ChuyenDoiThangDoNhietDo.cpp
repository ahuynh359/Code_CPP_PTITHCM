#include <iostream>
#include<iomanip>

using namespace std;

int main() {

    double a;
    cin >> a;
    cout << setprecision(2) << fixed << (a * 9 / 5) + 32;
}

