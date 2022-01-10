#include<bits/stdc++.h>

using namespace std;

void chuanHoa(string& s) {
    while (s[0] == ' ')
        s.erase(0, 1);
    while (s[s.length() - 1] == ' ')
        s.erase(s.length() - 1, 1);
    while (s.find("  ") != -1)
        s.erase(s.find("  "), 1);
    s[0] = toupper(s[0]);

    for (int i = 1; i < s.length(); i++)
        if (s[i] == ' ') {
            s[i + 1] = toupper(s[i + 1]);
            i++;
        }
        else
            s[i] = tolower(s[i]);


}

string cach1(string s) {
    string kq;
    kq = s.substr(s.rfind(' ') + 1, s.length() - s.rfind(' ')) + " ";
    s.erase(s.rfind(' '), s.length() - s.rfind(' '));
    kq += s;
    return kq;

}

string cach2(string s) {
    string kq = s.substr(0, s.find(' '));
    s.erase(0, s.find(' ') + 1);
    kq = s + " " + kq;
    return kq;
}

int main() {
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n;
        cin.ignore();
        getline(cin, s);
        chuanHoa(s);
        cout << (n == 1 ? cach1(s) : cach2(s)) << endl;


    }
}