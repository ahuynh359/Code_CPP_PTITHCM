#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stack>
#include<math.h>
#include<set>
#include <map>

using namespace std;

string chuanHoa(string& s) {
    string kq;
    while (s[0] == ' ')
        s.erase(0, 1);
    while (s[s.length() - 1] == ' ')
        s.erase(s.length() - 1, 1);
    while (s.find("  ") != -1)
        s.erase(s.find("  "), 1);

    kq = s.substr(s.rfind(" ") + 1, s.length() - s.rfind(" "));
    s.erase(s.rfind(" "), s.length() - s.rfind(" "));
    kq += s[0];
    for (int i = 1; i < s.length(); i++)
        if (s[i] == ' ')
            kq += s[i + 1];
    for (int i = 0; i < kq.length(); i++)
        kq[i] = tolower(kq[i]);
    return kq;
}

int main() {
    int t;
    map<string, int> dem;
    string s;
    cin >> t;
    cin.ignore();
    dem.clear();
    while (t--) {
        getline(cin, s);
        string d = chuanHoa(s);
        dem[d]++;

        if (dem[d] > 1)
            cout << d << dem[d];
        else
            cout << d;
        cout << "@ptit.edu.vn\n";

    }
    return 0;
}
