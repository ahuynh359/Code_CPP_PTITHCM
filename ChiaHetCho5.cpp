#include<iostream>
#include <string>
#include<iomanip>
#include<math.h>
using namespace std;


string KT(string n) {
    int sum = 0;
    for (long long int i = 0; i < n.length(); i++) {

        sum = 2 * sum + (n[i] - '0');
        if (sum >= 5)
            sum -= 5;
    }
    if (sum == 0)
        return "Yes";
    return "No";
}
int main() {
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin, s);
        cout << KT(s) << endl;
    }
}