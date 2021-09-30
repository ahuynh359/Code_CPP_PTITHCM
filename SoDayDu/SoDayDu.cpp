#include<iostream>
#include<math.h>
#include <string>
#include<map>
#include<math.h>
#include<algorithm>
#include<map>
#include<cstring>

using namespace std;

int KT(string s) {
    map<char, int> dem;
    dem.clear();
    if (s[0] == '0')
        return -1;
    for (int i = 0; i < s.length(); i++) {

        if (s[i] <= '9' && s[i] >= '0') {
            dem[s[i]]++;
        }
        else
            return -1;
    }
    for (char i = '0'; i <= '9'; i++)
        if (dem[i] == 0)
            return 0;
    return 1;
}

int main() {
    map<char, int> dem;
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        if (KT(a) == 1)
            cout << "YES";
        else if (KT(a) == 0)
            cout << "NO";
        else
            cout << "INVALID";
        cout << endl;
    }
    return 0;
}
