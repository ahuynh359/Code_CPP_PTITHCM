#include<iostream>
#include<string.h>
#include<string>
using namespace std;
int charToInt(char c) {
    return c - '0';
}
bool chiaHet2(string s) {
    for (int i = 0; i < s.length(); i++)
        if (charToInt(s[i]) % 2 != 0)
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
        if (soThuanNghich(str, str.length()) && chiaHet2(str))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;






    }



    return 0;
}