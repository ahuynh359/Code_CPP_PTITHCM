#include <iostream>
#include <string>
using namespace std;

bool KT(string s) {
    string kq;
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] - '0') % 2 != 0)
            return false;
        kq = s[s.length() - i - 1] + kq;

    }

    return kq == s;


}
int main() {
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin, s);
        if (KT(s))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

}