#include <iostream>
#include <string>


using namespace std;


int main() {

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    s1 += " ";
    while ((int)s1.find(s2) != -1) {
        s1.erase(s1.find(s2), s2.length() + 1);
    }
    cout << s1;
    return 0;
}
