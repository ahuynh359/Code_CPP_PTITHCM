#include<std++.h>

using namespace std;

struct So {
    int gTri;
    int soLan;
};
bool cmp(So s1, So s2) {
    if (s1.soLan == s2.soLan)
        return s1.gTri < s2.gTri;
    return s1.soLan > s2.soLan;
}

int main() {
    int t, * arr, n;
    vector<So>so;

    map<int, int>dem;
    cin >> t;
    while (t--) {
        cin >> n;
        int* d = new int[100001]{ 0 };
        dem.clear();
        so.clear();
        arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            dem[arr[i]]++;
        }
        for (auto it : dem) {
            So s{};
            s.gTri = it.first;
            s.soLan = it.second;
            so.push_back(s);
        }
        sort(so.begin(), so.end(), cmp);
        for (int i = 0; i < so.size(); i++)
            for (int j = 0; j < so[i].soLan; j++)
                cout << so[i].gTri << " ";
        cout << endl;

        delete[]arr;
        delete[]d;
    }

}