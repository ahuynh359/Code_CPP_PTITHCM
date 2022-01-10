#include<bits/stdc++.h>

using namespace std;

string s[10000];

void mod(int len) {
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < s[i].length(); j++)
            s[i][j] = tolower(s[i][j]);
    }


}


int main() {
    int index = 0;
    while (cin >> s[index]) {
        ++index;
    };


    mod(index);
    bool upper = true, end = false;

    for (int i = 0; i < index; i++) {
        int len = s[i].length();
        if (upper)
            s[i][0] = toupper(s[i][0]);

        if (s[i][len - 1] == '.' || s[i][len - 1] == '?' || s[i][len - 1] == '!') {
            s[i].erase(len - 1, 1);
            upper = true;
            end = true;

        } else {
            upper = false;
            end = false;
        }
        cout << s[i];
        if (end)
            cout << '\n';
        else if (i != index - 1)
            cout << " ";

    }


}
