
#include<string>
#include <iostream>
using namespace std;

string chuanHoaHoDem(string s) {
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length(); i++)
        s[i] = tolower(s[i]);
    return s;
}
string chuanHoaTen(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
    return s;
}
int main()
{
    string s, kq;
    getline(cin, s);

    while (s[0] == ' ')
        s.erase(0, 1);
    while (s.length() - 1 == ' ')
        s.erase(s.length() - 1, 1);

    for (int i = 0; i < s.length() - 1; i++)
        if (s[i] == ' ' && s[i +1 ] == ' ') {
            s.erase(i, 1);
            i--;
        }

    if (s.find(" ") != -1) {
        while (s.find(" ") != -1) {
            size_t i = 0;
            while (s[i] != ' ')
                i++;
            kq += chuanHoaHoDem(s.substr(0, i+1));
            s.erase(0, i + 1);
            
           
        }
        kq.erase(kq.length() - 1, 1);
    }
        
       
        kq += ", ";
        kq += chuanHoaTen(s);
    

    cout << kq;

}


