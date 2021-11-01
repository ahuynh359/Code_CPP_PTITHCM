#include <iostream>
#include <string>
#include <map>

using namespace std;


int main() {
    int n, * arr;
    map<int, int>dem;
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        dem[arr[i]]++;

    }

    for (auto it : dem)

        cout << it.first << " ";


    delete[]arr;
}

