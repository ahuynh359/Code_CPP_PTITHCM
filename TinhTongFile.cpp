#include <bits/stdc++.h>

using namespace std;
const long int MIN = -999999999;
const long int MAX = 999999999;

bool check(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (!(s[i] <= '9' && s[i] >= '0'))
            return false;
    }
    return true;
}

long _stoi(string s)
{
    int res = 0;
    for (int i = 0; i < s.length(); i++)
    {

        res = res * 10 + (s[i] - '0');
        if (res < MIN || res > MAX)
            return 0;
    }
    return res;
}

int main()
{

    string s;
    long long res = 0;
    ifstream in("DATA.in");
    while (in && in >> s)
    {
        if (check(s))
        {
            res += _stoi(s);
        }
    }
    cout << res;
    in.close();
}