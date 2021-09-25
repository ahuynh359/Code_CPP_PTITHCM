#include<iostream>
#include<string>

using namespace std;

void swap(string& a, string& b) {
    string t = a;
    a = b;
    b = t;

}

string truHaiSo(string a, string b) {
    string kq;
    int tam, nho = 0;

    while (a.length() < b.length())
        a = "0" + a;
    while (b.length() < a.length())
        b = "0" + b;

    if (a < b)
        swap(a, b);

    for (int i = a.length() - 1; i >= 0; i--) {
        if ((a[i] - '0') - (b[i] - '0') - nho < 0) {
            tam = (a[i] - '0') + 10 - (b[i] - '0') - nho;
            nho = 1;
        }
        else {
            tam = (a[i] - '0') - (b[i] - '0') - nho;
            nho = 0;
        }
        kq = to_string(tam) + kq;


    }

    return kq;
}

int main() {

    int t;
    string x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        cout << truHaiSo(x, y) << endl;
    }
}