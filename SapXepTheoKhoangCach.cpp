#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<algorithm>

using namespace std;
struct So {
    int gTri, so, viTri;
};

bool check(So a, So b) {
    if (a.so != b.so)
        return a.so < b.so;
    return a.viTri < b.viTri;
}

int main() {
    int t, n, x, a;
    vector<So> arr;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        arr.clear();
        for (int i = 0; i < n; i++) {
            So s;
            cin >> a;
            s.gTri = a;
            s.so = abs(x - a);
            s.viTri = i;
            arr.push_back(s);
        }
        sort(arr.begin(), arr.end(), check);

        for (int i = 0; i < n; i++)
            cout << arr[i].gTri << " ";
        cout << endl;


    }

}