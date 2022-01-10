#include<iostream>
#include<set>
#include<map>

typedef unsigned long long int ll;


using namespace std;

int main() {
    int t;
    string s;
    map<char, int> kq;
    long long int dem;
    cin >> t;

    while (t--) {
        cin >> s;
        kq.clear();
        dem = 0;

        for (int i = 0; i < s.length(); i++)
            if (s[i] <= 'Z' && s[i] >= 'A')
                kq[s[i]]++;
            else if (s[i] <= '9' && s[i] >= '0')
                dem += (s[i] - '0');

        for (auto it : kq)
            for (int i = 0; i < it.second; i++)
                cout << it.first;
        cout << dem << endl;

    }

}