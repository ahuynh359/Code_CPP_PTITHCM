#include<iostream>
#include<vector>
#include <string>

using namespace std;

void swap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}


int main() {
    int t;
    cin >> t;
    string s;
    while (t--) {
        cin >> s;
        string tam = s;
        int n = s.length() - 2;
        while (n >= 0 && s[n] <= s[n + 1])
            n--;
        if (n >= 0) {
            int k = s.length() - 1;
            while (s[k] >= s[n] || s[k] == s[k - 1])
                k--;
            swap(s[k], s[n]);
        }
        if (n == -1 || s > tam || s == tam || s[0] == '0')
            cout << -1;
        else if (s < tam)
            cout << s;

        cout << endl;

    }
}