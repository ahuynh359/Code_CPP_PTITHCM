#include<iostream>

using namespace std;

int main() {
    int t;
    string n;
    long long int m;

    cin >> t;
    while (t--) {
        cin >> n >> m;
        long long int kq = 0;
        for (int i = 0; i < n.length(); i++) {
            kq = (kq * 10 + (n[i] - '0')) % m;
        }

        cout << kq << endl;
    }


    return 0;
}