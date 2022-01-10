#include <bits/stdc++.h>

using namespace std;

void chuanHoa(string &s)
{
    for (int i = 0; i < s.length(); i++)
        s[i] = tolower(s[i]);
}

int main()
{
    map<string, int> ins;
    set<string> res;
    string s;
    ifstream in1("DATA1.in");
    while (in1 && in1 >> s)
    {
        chuanHoa(s);
        res.insert(s);
    }
    for (auto &it : res)
        ins[it]++;
    in1.close();

    ifstream in2("DATA2.in");
    while (in2 && in2 >> s)
    {
        chuanHoa(s);
        auto it = ins.find(s);
        if (it != ins.end())
            ins[s] = 0;
        res.insert(s);
    }

    for (auto &it : res)
        cout << it << " ";
    cout << '\n';

    for (auto &it : ins)
        if (it.second == 0)
            cout << it.first << " ";
}