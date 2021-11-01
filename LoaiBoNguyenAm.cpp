#include <iostream>
#include <string>
#include <map>

using namespace std;


int main() {

    char kyTu[6] = { 'A','E','I','O','U','Y' };
    string s;
    getline(cin, s);

    int vt = 0;
    for (int i = 0; i < 6; i++) {
        while (s.find(kyTu[i]) != -1)
            s.erase(s.find(kyTu[i]), 1);
        while (s.find(tolower(kyTu[i])) != -1)
            s.erase(s.find(tolower(kyTu[i])), 1);

    }
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
    for (int i = 0; i < s.length(); i++) {
        cout << '.';
        cout << s[i];
    }
}

