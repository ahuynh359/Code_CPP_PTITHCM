#include<iostream>
#include<stack>
using namespace std;

void tangGiam(string s)
{

    stack <int> arr;
    int i, j = 0;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == 'D')
        {
            if (i == 0 || s[i - 1] == 'I')
                arr.push(++j);
            arr.push(++j);
        }
        else
        {
            while (!arr.empty())
            {
                cout << arr.top();
                arr.pop();
            }
            if (i == 0) cout << ++j;
            if (s[i + 1] != 'D')cout << ++j;
        }
    }
    while (!arr.empty())
    {
        cout << arr.top();
        arr.pop();
    }
    cout << endl;
}

int main()
{
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        tangGiam(s);
    }
    return 0;
}
