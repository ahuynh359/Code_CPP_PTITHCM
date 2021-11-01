#include<iostream>
#include<string>

using namespace std;

int main() {
    int t, dem, kq;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        dem = 0;
        kq = 0;
        for (int i = 0; i < s.length(); i++) {
            while (s[i] <= '9' && s[i] >= '0') {
                dem = dem * 10 + (s[i] - '0');
                i++;
            }
            kq += dem;
            dem = 0;

        }
        cout << kq << endl;

    }
    return 0;
}