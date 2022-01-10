#include<iostream>
#include <string>

using namespace std;

int chuanHoa(string s) {
    int dem = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == ' ')
            dem++;
    return dem;
}

bool KT(string s) {
    int chan = 0, le = 0;

    s += " ";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ')
            if ((s[i - 1] - '0') % 2 == 0)
                chan++;
            else
                le++;
    }

    if (chuanHoa(s) % 2 == 0)
        return chan > le;
    return le > chan;


}



int main() {
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while (t--) {


        getline(cin, s);
        chuanHoa(s);
        if (KT(s))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;


    }


}