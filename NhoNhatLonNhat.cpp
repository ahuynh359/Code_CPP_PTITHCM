#include<bits/std++.h>

using namespace std;

void soLonNhat(int m, int s) {
    if (s > m * 9 || s == 0) {
        cout << -1;
        return;
    }
    vector<int> so;
    while (m--) {
        if (s >= 9) {
            so.push_back(9);
            s -= 9;
        }
        else if (s > 0) {
            so.push_back(s);
            s = 0;
        }
        else
            so.push_back(0);
    }
    for (int i = 0; i < so.size(); i++)
        cout << so[i];
}

void soNhoNhat(int m, int s) {
    //Tong bang 0 hoac tong lon hon so chu so cho phep
    if (s > m * 9 || s == 0) {
        cout << -1;
        return;
    }
    vector<int> so;

    s -= 1;
    while (m--) {
        if (s >= 9) {
            so.push_back(9);
            s -= 9;
        }
        else if (s > 0) {
            so.push_back(s);
            s = 0;
        }
        else
            so.push_back(0);
    }
    so[so.size() - 1] += 1;
    for (int i = so.size() - 1; i >= 0; i--)
        cout << so[i];
}

int main() {
    int m, s;
    cin >> m >> s;
    soNhoNhat(m, s);
    cout << " ";
    soLonNhat(m, s);
}