#include<iostream>

using namespace std;

void solve(string s, int k) {
    char* arr;
    int dem, tong = 0;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        arr = new char[26]{ 0 };
        dem = 0;
        for (int j = i; j < n; j++) {
            if (arr[s[j] - 'a'] == 0)
                dem++;
            arr[s[j] - 'a']++;
            if (dem == k)
                tong++;
            if (dem > k)
                break;
        }
    }
    cout << tong << endl;

}

int main() {
    int t, k;
    string s;
    cin >> t;
    while (t--) {
        cin >> s >> k;
        solve(s, k);
    }
}