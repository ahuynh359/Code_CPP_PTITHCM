#include <bits/stdc++.h>

using namespace std;

void chuanHoa(string &s)
{
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
}

int main()
{
    set<string> res;
    string s;
    ifstream in("VANBAN.in");
    while (in && in >> s)
    {
        chuanHoa(s);
        res.insert(s);
    }
    for (auto &it : res)
        cout << it << "\n";
    in.close();
}