#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int charToInt(char c) {
    return c - '0';
}
bool tongChuSo(string s) {
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
        sum += charToInt(s[i]);
    if (sum % 10 != 0)
        return false;
    return true;

}

bool soThuanNghich(string s, int length) {
    if (s[0] != '8')
        return false;
    if (s[length - 1] != '8')
        return false;
    for (int i = 0; i < length / 2; i++) {
        if (s[i] != s[length - i - 1])
            return false;


    }

    return true;
}


int main() {
    int soBoTest;

    cin >> soBoTest;
    string str;


    for (int k = 0; k < soBoTest; k++) {
        cin >> str;
        if (soThuanNghich(str, str.length()) && tongChuSo(str))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;






    }



    return 0;
}