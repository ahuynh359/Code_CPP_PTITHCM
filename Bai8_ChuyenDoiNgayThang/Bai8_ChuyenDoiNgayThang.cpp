#include <iostream>

using namespace std;

int main() {
    int ngay;
    cin >> ngay;
    int nam = 0, tuan = 0;

    while (ngay >= 365) {
        nam = ngay / 365;
        ngay %= 365;
    }

    while (ngay >= 7) {
        tuan = ngay / 7;
        ngay %= 7;

    }
    cout << nam << " " << tuan << " " << ngay;
}