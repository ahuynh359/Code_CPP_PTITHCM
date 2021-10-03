#include<iostream>
#include <string>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;
struct So {
    string so;
    int xuatHien{};
};

bool STN(string s) {
    if (s.length() == 1)
        return false;
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - 1 - i])
            return false;
    }
    return true;
}

bool cmp(const So& c1, const So& c2) {

    if (c1.so.length() != c2.so.length())
        return c1.so.length() > c2.so.length();

    return c1.so > c2.so;

}

int main() {
    map<string, int> dem;
    vector<So> kq;
    string s;

    while (cin >> s) {
        if (STN(s))
            dem[s]++;

    }
    for (const auto& it : dem) {
        So z;
        z.so = it.first;
        z.xuatHien = it.second;
        kq.push_back(z);
    }
    sort(kq.begin(), kq.end(), cmp);

    for (auto& i : kq)
        cout << i.so << " " << i.xuatHien << endl;
}
