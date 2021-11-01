#include <iostream>
#include <math.h>
#include<algorithm>

using namespace std;

struct ThoiGian {
    unsigned int gio, phut, giay;
};

bool check(ThoiGian tg1, ThoiGian tg2) {
    if (tg1.gio != tg2.gio)
        return tg1.gio < tg2.gio;
    if (tg1.phut != tg2.phut)
        return tg1.phut < tg2.phut;
    return tg1.giay < tg2.giay;
}

int main() {
    int n;
    cin >> n;
    ThoiGian* tg = new ThoiGian[n];

    for (int i = 0; i < n; i++) {
        cin >> tg[i].gio;
        cin >> tg[i].phut;
        cin >> tg[i].giay;
    }

    sort(tg, tg + n, check);
    for (int i = 0; i < n; i++) {
        cout << tg[i].gio << " " << tg[i].phut << " " << tg[i].giay << endl;
    }

    delete[] tg;
    return 0;
}