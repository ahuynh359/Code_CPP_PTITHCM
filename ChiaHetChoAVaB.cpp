#include<iostream>
#include<math.h>
#include<algorithm>


using namespace std;


int main() {
    int t, m, n, a, b;
    cin >> t;
    while (t--) {
        int dem = 0;
        cin >> m >> n >> a >> b;
        for (int i = m; i <= n; i++) {
            if (i % a == 0)
                dem++;
            else if (i % b == 0)
                dem++;


        }
        cout << dem << endl;

    }


}