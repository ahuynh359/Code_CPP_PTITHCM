#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
#include<string>

using namespace std;

struct Nguoi {
    string ten, ngay;
};

bool gia(Nguoi ng1, Nguoi ng2) {
    string s1 = ng1.ngay.substr(6, 4);
    string s2 = ng2.ngay.substr(6, 4);
    if (s1 != s2)
        return s1 < s2;
    s1 = ng1.ngay.substr(3, 2);
    s2 = ng2.ngay.substr(3, 2);
    if (s1 != s2)
        return s1 < s2;
    s1 = ng1.ngay.substr(0, 2);
    s2 = ng2.ngay.substr(0, 2);
    return s1 < s2;


}

bool tre(Nguoi ng1, Nguoi ng2) {
    string s1 = ng1.ngay.substr(6, 4);
    string s2 = ng2.ngay.substr(6, 4);
    if (s1 != s2)
        return s1 > s2;
    s1 = ng1.ngay.substr(3, 2);
    s2 = ng2.ngay.substr(3, 2);
    if (s1 != s2)
        return s1 > s2;
    s1 = ng1.ngay.substr(0, 2);
    s2 = ng2.ngay.substr(0, 2);
    return s1 > s2;


}

int main() {
    int n;
    cin >> n;
    Nguoi* ng = new Nguoi[n];

    for (int i = 0; i < n; i++) {
        cin >> ng[i].ten >> ng[i].ngay;
    }
    sort(ng, ng + n, tre);
    cout << ng[0].ten << endl;
    sort(ng, ng + n, gia);
    cout << ng[0].ten << endl;
    return 0;

}