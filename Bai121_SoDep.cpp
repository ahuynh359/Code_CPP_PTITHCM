#include<iostream>
#include <string.h>
using namespace std;

int charToInt(char c) {
    return c - '0';
}

bool gapDoi(string s) {
    if (charToInt(s[0]) == (charToInt(s[s.length() - 1]) * 2)
        ||
        (charToInt(s[0]) * 2) == charToInt(s[s.length() - 1]))
        return true;
    return false;

}

bool soThuanNghich(string s) {


    for (int i = 1; i < s.length() - 1; i++) {
        if (s[i] != s[s.length() - i - 1])
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
        if (soThuanNghich(str) && gapDoi(str))
            printf("%s\n", "YES");
        else
            printf("%s\n", "NO");


      

    }


    return 0;
}