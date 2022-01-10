
#include <iostream>
#include<string>
#include<map>

using namespace std;

int main() {


    int t, k;
    map<char, int> dem;

    cin >> t;
    cin.ignore();


    while (t--) {
        string s;
        getline(cin, s);
        cin >> k;
        cin.ignore();
        int d = 0;
        for (int i = 0; i < s.size(); i++)
            dem[s[i]]++;
        for (int i = 'a'; i <= 'z'; i++)
            if (dem[i] == 0)
                d++;
        if (d <= k)
            cout << 1;
        else
            cout << 0;
        cout << endl;
        dem.clear();


    }
}
