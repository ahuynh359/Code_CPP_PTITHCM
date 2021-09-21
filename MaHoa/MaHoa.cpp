#include <iostream>
#include <string>
#include <map>

using namespace std;


int main() {

    int t;
    string s;
    cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin, s);
        int dem = 1;
        s = s + " ";
        int i = 0;
        char chu;
        while (i < s.length() - 1) {
            if (s[i] == s[i + 1])
                while (s[i] == s[i + 1]) {
                    dem++;
                    i++;
                    chu = s[i];
                }
            else
                chu = s[i];

            cout << chu << dem;
            dem = 1;
            i++;

        }
        cout << endl;

    }

}