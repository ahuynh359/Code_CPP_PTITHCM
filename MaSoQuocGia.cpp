#include <iostream>
#include<string>
using namespace std;
int main() {
    int t;
    string s;

    cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin, s);
        while (s.find("084") != -1)
            s.erase(s.find("084"), 3);
        cout << s << endl;
    }
    return 0;
}

