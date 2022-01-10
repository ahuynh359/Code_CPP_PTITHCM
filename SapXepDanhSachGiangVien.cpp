#include<iostream>
#include <string>
#include<algorithm>

using namespace std;

struct GiangVien {
    string maGV, ten, boMon;
};

bool check(GiangVien gv1, GiangVien gv2) {
    string ten1;
    string ten2;
    if (gv1.ten.find(" ") != -1)
        ten1 = gv1.ten.substr(gv1.ten.rfind(" ") + 1, gv1.ten.length() - gv1.ten.rfind(" "));
    else
        ten1 = gv1.ten;
    if (gv2.ten.find(" ") != -1)
        ten2 = gv2.ten.substr(gv2.ten.rfind(" ") + 1, gv2.ten.length() - gv2.ten.rfind(" "));
    else
        ten1 = gv2.ten;

    if (ten2 != ten1)
        return ten1 < ten2;
    return gv1.maGV < gv2.maGV;
}

string layTat(string s) {
    while (s[0] == ' ')
        s.erase(0, 1);
    while (s[s.length() - 1] == ' ')
        s.erase(s.length() - 1, 1);
    while (s.find("  ") != -1)
        s.erase(s.find("  "), 1);
    string kq;
    kq += toupper(s[0]);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            kq += toupper(s[i + 1]);
        }

    }
    return kq;
}

int main() {

    int n;
    cin >> n;
    cin.ignore();

    auto* gv = new GiangVien[n];

    for (int i = 0; i < n; i++) {
        gv[i].maGV = "GV";
        for (int j = 0; j < 2 - to_string(i + 1).length(); j++)
            gv[i].maGV += "0";
        gv[i].maGV += to_string(i + 1);
        getline(cin, gv[i].ten);
        getline(cin, gv[i].boMon);
    }

    sort(gv, gv + n, check);
    for (int i = 0; i < n; i++) {
        cout << gv[i].maGV << " " << gv[i].ten << " " << layTat(gv[i].boMon) << endl;

    }

    return 0;
}
