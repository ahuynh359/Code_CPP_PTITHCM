

#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    char a[15] = { 'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D' };
    char b[15] = { 'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B' };
    int t;
    int sum, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int diem = 0;
        char* s = new char[15];
        if (n == 101)
            for (int i = 0; i < 15; i++) {
                cin >> s[i];
                if (s[i] == a[i])
                    diem++;

            }
        else {
            for (int i = 0; i < 15; i++) {
                cin >> s[i];
                if (s[i] == b[i])
                    diem++;
            }
        }
        cout << setprecision(2) << fixed << float(diem) * 2 / 3 << endl;
        
    }
}

