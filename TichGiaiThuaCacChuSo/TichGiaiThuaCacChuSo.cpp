#include<iostream>

using namespace std;

int main() {
    int t, n;
    string a;
    int dem[10] = { 0 };
    cin >> t;
    while (t--) {
        cin >> n >> a;
        for (int i = 0; i < n; i++) {
            if (a[i] == '2' || a[i] == '3' || a[i] == '5' || a[i] == '7')
                dem[a[i] - '0']++;
            if (a[i] == '4') {
                dem[3]++;
                dem[2] += 2;
            }

            if (a[i] == '6') {
                dem[5]++;
                dem[3]++;
            }
            if (a[i] == '8') {
                dem[7]++;
                dem[2] += 3;
            }
            if (a[i] == '9') {
                dem[7]++;
                dem[3] += 2;
                dem[2]++;
            }
        }
        for (int i = 9; i > 1; i--)
            while (dem[i] > 0) {
                cout << i;
                dem[i]--;
            }

        cout << endl;

    }
}