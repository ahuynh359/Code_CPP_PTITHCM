#include<iostream>
#include<map>

using namespace std;


int main() {
    int t, n;
    map<char, int> dem;

    cin >> t;
    string a;
    while (t--) {
        dem.clear();
        cin >> n >> a;

        for (int i = 0; i < a.length(); i++) {
            if (a[i] == '2' || a[i] == '3' || a[i] == '5' || a[i] == '7') {
                dem[a[i]]++;
            }
            else if (a[i] == '4') {
                dem['3']++;
                dem['2'] += 2;
            }
            else if (a[i] == '6') {
                dem['5']++;
                dem['3']++;
            }
            else if (a[i] == '8') {
                dem['7']++;
                dem['2'] += 3;
            }
            else if (a[i] == '9') {
                dem['7']++;
                dem['3'] += 2;
                dem['2']++;
            }


        }
        for (auto i = dem.rbegin(); i != dem.rend(); i++) {
            if (i->second > 0)
                for (int j = 0; j < i->second; j++)
                    cout << i->first;
        }
        cout << endl;

    }
}