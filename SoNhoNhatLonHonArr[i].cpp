#include<bits/stdc++.h>

using namespace std;

int main() {
    int t, n, x;
    set<int> dem;
    vector<int> arr;
    set<int>::iterator it;
    int m;

    cin >> t;
    while (t--) {
        arr.clear();
        dem.clear();
        m = -1e8;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            arr.push_back(x);
            dem.insert(x);
            m = max(m, x);
        }


        for (int& i : arr) {
            if (i == m)
                cout << "_ ";
            else {
                it = dem.find(i);
                it++;
                cout << *it << " ";
            }


        }
        cout << '\n';

    }

}