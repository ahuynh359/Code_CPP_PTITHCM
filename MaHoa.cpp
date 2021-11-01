#include<iostream>
#include<math.h>

using namespace std;


int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        s += " ";
        int dem = 1;
        for (int i = 0; i < s.length() - 1; i++) {
            while (s[i] == s[i + 1]) {
                dem++;
                i++;
            }
            cout << s[i] << dem;
            dem = 1;
        }
        cout << endl;
    }

}