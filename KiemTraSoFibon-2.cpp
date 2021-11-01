#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>


using namespace std;


int main() {

    int t;

    cin >> t;


    vector<unsigned long long int> fibon;
    unsigned long long int a = 0, b = 1, i = 2, c = 0;

    fibon.push_back(0);
    fibon.push_back(1);
    while (c <= 9000000000000000000) {
        c = a + b;
        fibon.push_back(a + b);
        a = b;
        b = c;

    }


    while (t--) {
        unsigned long long int n;
        cin >> n;

        if (find(fibon.begin(), fibon.end(), n) != fibon.end())
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

}