#include<iostream>
#include <math.h>
#include <iomanip>
using namespace std;

struct Point {
    double x, y;
};
void input(Point& a) {
    cin >> a.x >> a.y;
}
double distance(Point d1, Point d2) {
    return sqrt(pow(d2.y - d1.y, 2) + pow(d2.x - d1.x, 2));
}
int main() {
    struct Point A, B;
    int t;
    cin >> t;
    while (t--) {
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A, B) << endl;
    }
    return 0;
}