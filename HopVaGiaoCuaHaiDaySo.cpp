#include<iostream>
#include<string>
#include<vector>
#include<cstring>
#include<algorithm>
#include<iomanip>
#include<set>
#include<map>

using namespace std;

void giao(int* arr, int n, int* brr, int m) {
    set<int> m1, m2;
    map<int, int> kq;
    for (int i = 0; i < n; i++)
        m1.insert(arr[i]);
    for (int i = 0; i < m; i++)
        m2.insert(brr[i]);
    for (auto it : m1)
        kq[it]++;
    for (auto it : m2)
        kq[it]++;
    for (auto it : kq)
        if (it.second == 2)
            cout << it.first << " ";
}

void hop(int* arr, int n, int* brr, int m) {
    set<int> mang;
    for (int i = 0; i < n; i++)
        mang.insert(arr[i]);
    for (int i = 0; i < m; i++)
        mang.insert(brr[i]);
    for (auto it : mang) {
        cout << it << " ";

    }
}

int main() {
    int n, m, * arr, * brr, t;

    cin >> t;
    while (t--) {
        cin >> n >> m;
        arr = new int[n];
        brr = new int[m];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < m; i++)
            cin >> brr[i];
        hop(arr, n, brr, m);
        cout << endl;
        giao(arr, n, brr, m);
        cout << endl;
        delete[]arr;
        delete[]brr;
    }


    return 0;
}
