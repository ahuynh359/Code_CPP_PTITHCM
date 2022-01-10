#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<algorithm>

#define mod  1000000007
using namespace std;


int main() {
    int t, n, * arr;
    string s;

    cin >> t;
    while (t--) {
        int dem = 0;
        cin >> s;
        while (s.find("100") != -1) {
            s.erase(s.find("100"), 3);
            dem += 3;
        }
        if (dem > 0)

            cout << dem;
        cout << endl;

    }


    return 0;
}
