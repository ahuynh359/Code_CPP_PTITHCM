
#include<string>
#include <iostream>

using namespace std;


int main() {
    string s, kq;
    getline(cin, s);

    while (s[0] == ' ')
        s.erase(0, 1);
    while (s.length() - 1 == ' ')
        s.erase(s.length() - 1, 1);

    for (int i = 0; i < s.length() - 1; i++)
        if (s[i] == ' ' && s[i + 1] == ' ') {
            s.erase(i, 1);
            i--;
        }

    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s.rfind(' '))
            break;
        if (s[i] == ' ') {
            s[i + 1] = toupper(s[i + 1]);
            i++;

        }
        else
            s[i] = tolower(s[i]);


    }
    int i = s.length() - 1;
    while (i > s.rfind(' ') + 1) {
        s[i] = toupper(s[i]);
        i--;
    }
    s.insert(s.rfind(' '), 1, ',');

    cout << s;
}


