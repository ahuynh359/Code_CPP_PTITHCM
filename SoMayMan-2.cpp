#include<iostream>
#include<math.h>
#include <string>
#include<map>
#include<math.h>
#include<algorithm>

using namespace std;

bool KT(string a) {
    int tam = 0;
    do {
        tam = 0;
        for (int i = 0; i < a.length(); i++) {
            tam += (a[i] - '0');
        }
        a = to_string(tam);

    } while (tam > 9);
    return tam == 9;
}
int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        cout << KT(a) << endl;
    }
    return 0;
}
