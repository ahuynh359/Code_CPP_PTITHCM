#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int charToInt(char c) {
    return c - '0';
}
bool SNT(int n) {
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
    return false;
}
bool KTSNT(string s) {
    for (int i = 0; i < s.length(); i++)
        if (SNT(charToInt(s[i]))==  false)
            return false;
    return true;

}

bool soThuanNghich(string s, int length) {

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
        if (soThuanNghich(str, str.length()) && KTSNT(str))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;






    }



    return 0;
}