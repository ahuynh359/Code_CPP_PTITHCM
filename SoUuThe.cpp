#include<iostream>
#include<string>
using namespace std;

int charToInt(char s) {
    return s - '0';
}
bool Kt(string s) {
    if (s[0] == '0')
        return false;
    for (int i = 0; i <= s.size() / 2; i++) {
        if (!(s[i] <= '9' && s[i] >= '0'))
            return false;
        if (!(s[s.size() - i - 1] <= '9' && s[s.size() - i - 1] >= '0'))
            return false;
    }
    return true;
}

bool uuTheChan(string s) {

    if (s.size() % 2 != 0)
        return false;
    int chan = 0, le = 0;
    for (int i = 0; i < s.size(); i++)
        if (charToInt(s[i]) % 2 == 0)
            chan++;
        else
            le++;
    if (chan > le)
        return true;
    return false;

}

int main() {
    int soBoTest;
    cin >> soBoTest;
    string s;


    for (int k = 0; k < soBoTest; k++) {
       
        cin >> s;
        if (Kt(s)) {

            if (uuTheChan(s))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "INVALID" << endl;



    }

    return 0;
}