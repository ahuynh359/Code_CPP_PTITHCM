#include <iostream>
#include <set>
#include <string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    cin.ignore();
    string s1, s2;
    while (t--) {
        getline(cin, s1);
        getline(cin, s2);
        set<string> dem1, dem2;
        dem2.clear();
        dem1.clear();
        s2 += " ";
        s1 += " ";
        while (s2.find(' ') != -1) {
            string sub = s2.substr(0, s2.find(' '));
            dem2.insert(sub);
            s2.erase(0, s2.find(' ') + 1);
        }

        while (s1.find(' ') != -1) {
            string sub = s1.substr(0, s1.find(' '));
            dem1.insert(sub);
            s1.erase(0, s1.find(' ') + 1);
        }

        for (const auto& it : dem1)
            if (dem2.find(it) == dem2.end())
                cout << it << " ";
        cout << endl;
    }

}