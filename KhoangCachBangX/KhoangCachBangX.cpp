#include <iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main() {
    int t, n, x, dem, k;
    vector<int> arr;
    cin >> t;

    while (t--) {
        cin >> n >> k;
        arr.clear();
    
        dem = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size(); i++) {

            if (binary_search(arr.begin(), arr.end(), k + arr[i]))
                dem++;
        }
        if (dem == 0)
            cout << -1 << endl;
        else
            cout << 1 << endl;
    }
}