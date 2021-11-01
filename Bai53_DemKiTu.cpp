
#include <iostream>
#include <string>

using namespace std;


int main() {

    string s;
    int so = 0, chu = 0, khac = 0;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
            chu++;

        else if (s[i] <= '9' && s[i] >= '0')
            so++;
        else

            khac++;

    }

    cout << chu << " " << so << " " << khac;

    return 0;
}
