#include<iostream>
#include<string>

using namespace std;

bool check1(string s) {
    for (int i = 0; i < s.length() - 1; i++)
        if ((s[i] - '0') + 1 != (s[i + 1] - '0'))
            return false;
    return true;
}

bool check2(string s) {
    for (int i = 0; i < s.length() - 1; i++)
        if (s[i] != s[i + 1])
            return false;
    return true;
}

bool check3(string s) {
    for (int i = 0; i < 2; i++)
        if (s[i] != s[i + 1])
            return false;
    return s[3] == s[4];
}

bool check4(string s) {
    for (int i = 0; i < s.length(); i++)
        if (s[i] != '6' && s[i] != '8')
            return false;
    return true;
}

bool check(string s) {
    s.erase(8, 1);
    s = s.substr(5, 5);
    if (check1(s))
        return true;
    if (check2(s))
        return true;
    if (check3(s))
        return true;
    if (check4(s))
        return true;
    return false;


}

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        if (check(s))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}