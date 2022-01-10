#include<iostream>
#include <vector>

using namespace std;

string tinhLonNhat(string s) {
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '5')
            s[i] = '6';
    return s;
}

string tinhNho(string s) {
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '6')
            s[i] = '5';
    return s;
}

string tinhTong(string a, string b) {
    int nho = 0, tam;
    string kq;
    while (a.length() < b.length())
        a = "0" + a;
    while (b.length() < a.length())
        b = "0" + b;
    for (int i = a.length() - 1; i >= 0; i--) {
        tam = (a[i] - '0') + (b[i] - '0') + nho;
        kq = to_string(tam % 10) + kq;
        nho = tam / 10;
    }
    if (nho > 0)
        kq = to_string(nho) + kq;
    while (kq[0] == '0')
        kq.erase(0, 1);
    return kq;
}



int main() {
    int t;
    cin >> t;
    string a, b;
    while (t--) {
        cin >> a >> b;
        cout << tinhTong(tinhNho(a), tinhNho(b)) << " " << tinhTong(tinhLonNhat(a), tinhLonNhat(b)) << endl;
    }
}