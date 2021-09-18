#include<string>
#include <iostream>
using namespace std;
int main() {
    int t;
    string x;
    cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin, x);
        for (int i = 0; i < x.length(); i++) {
            if (x[i] >= 'a' && x[i] <= 'z')
                x[i] = toupper(x[i]);
            else if (x[i] >= 'A' && x[i] <= 'Z')
                x[i] = tolower(x[i]);
        }
        cout << x << endl;


    }
}