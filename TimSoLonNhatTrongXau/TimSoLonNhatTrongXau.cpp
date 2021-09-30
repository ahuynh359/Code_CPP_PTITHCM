#include<iostream>
#include<string>
#include<vector>
#include<cstring>

#define mod  1000000007
using namespace std;

bool check(char s) {
    return s <= '9' && s >= '0';
}


int main() {

    int t;
    string s;
    int kq = 0, sub = 0;
    cin >> t;
    while (t--) {
        sub = 0;
        kq = 0;
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (check(s[i]))
                sub = sub * 10 + (s[i] - '0');
            else {
                if (sub > kq)
                    kq = sub;

                sub = 0;
            }

        }
        if (sub > kq)
            kq = sub;

        cout << kq << endl;

    }
    return 0;
}
