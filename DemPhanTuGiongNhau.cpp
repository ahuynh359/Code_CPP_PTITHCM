#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>

using namespace std;

int main() {
    int t, n, x, ** arr;
    map<int, int> m;
    set<int> temp;
    cin >> t;
    while (t--) {
        cin >> n;
        arr = new int* [n];
        for (int i = 0; i < n; i++)
            arr[i] = new int[n];
        int d = 0;

        m.clear();

        for (int i = 0; i < n; i++) {
            temp.clear();
            for (int j = 0; j < n; j++) {
                cin >> x;
                temp.insert(x);
            }

            for (auto it : temp)
                m[it]++;

        }

        for (auto it : m)
            if (it.second == n)
                d++;
        cout << d << endl;


    }

}