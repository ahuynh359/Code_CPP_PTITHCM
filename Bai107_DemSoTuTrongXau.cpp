#include<iostream>
#include <string>
#include <map>

using namespace std;

int main() {

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    s1 += " ";
    s2 += " ";
    string tam;
    tam = "";

    map<string, int> kq;
    s1 += " ";
    s2 += " ";
    kq.clear();
    for (int i = 0; i < s2.length(); i++) {
        if (s2[i] == ' ') {
            kq[tam]++;
            tam = "";
        }
        else

            tam += s2[i];
    }

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == ' ') {
            kq[tam]++;
            tam = "";
        }
        else
            tam += s1[i];

    }

    for (auto& it : kq) {
        if (it.second  == 1)
            cout << it.first << " ";
    }


}