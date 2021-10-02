#include<iostream>
#include<set>
#include<map>
#include <string>
#include <algorithm>

using namespace std;

bool KT(string s) {
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - 1 - i])
            return false;
    }
    return true;
}

using namespace std;

int main() {
    int t;
    string s, kq;
    cin >> t;

    while (t--) {
        cin >> s;
        kq = "";
        for (int i = 0; i < s.length(); i++)
            s[i] = toupper(s[i]);

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'A' || s[i] == 'B' || s[i] == 'C')
                kq += '2';
            else if (s[i] == 'D' || s[i] == 'E' || s[i] == 'F')
                kq += '3';
            else if (s[i] == 'G' || s[i] == 'H' || s[i] == 'I')
                kq += '4';
            else if (s[i] == 'J' || s[i] == 'K' || s[i] == 'L')
                kq += '5';
            else if (s[i] == 'M' || s[i] == 'N' || s[i] == 'O')
                kq += '6';
            else if (s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S')
                kq += '7';
            else if (s[i] == 'T' || s[i] == 'U' || s[i] == 'V')
                kq += '8';
            else
                kq += '9';
        }
        if (KT(kq))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

}