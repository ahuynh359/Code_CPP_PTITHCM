#include <iostream>
#include <string>
#include <map>

using namespace std;


int main() {
    int n;
    string* s;
    map<string, int> dem;
    cin >> n;
    cin.ignore();
    s = new string[n];
    for (int i = 0; i < n; i++) {
        getline(cin, s[i]);
        dem[s[i]]++;
    }
    int d = 0;
    for (auto i : dem)

        d++;
    cout << d;

}