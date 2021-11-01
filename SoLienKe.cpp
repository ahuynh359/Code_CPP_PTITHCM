#include <iostream>
#include <string>
#include <math.h>
#include <map>

using namespace std;

bool KT(string s) {
    for (int i = 0; i < s.length() - 1; i++) {
        if (abs((s[i] - '0') - (s[i + 1] - '0')) != 1)
            return false;
    }
    return  true;
}
int main() {
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while (t--) {
        getline(cin, s);

        if (KT(s))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;


    }

}

