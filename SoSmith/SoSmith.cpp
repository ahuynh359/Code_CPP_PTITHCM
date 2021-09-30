#include<iostream>
#include<math.h>

#define MAX 100000

using namespace std;
bool check[100001];

void seive() {
    for (int i = 0; i <= MAX; i++)
        check[i] = true;
    check[0] = check[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (check[i])
            for (int j = i * i; j <= MAX; j += i) {
                check[j] = false;
            }
    }

}

long long int tongChuSo(long long int n) {
    long long int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

long long int tongThuaSo(long long int n) {
    long long int s = 0;
    while (n % 2 == 0) {
        s += 2;
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0) {
            while (n % i == 0) {
                s += tongChuSo(i);
                n /= i;
            }

        }

    if (n > 2) {
        s += tongChuSo(n);
    }

    return s;

}

int main() {
    seive();

    int t;
    int n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (!check[n] && tongChuSo(n) == tongThuaSo(n))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}
