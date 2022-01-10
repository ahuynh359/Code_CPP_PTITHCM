#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    int t, n, *arr, k, *kq;
    deque<int> temp;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        arr = new int[n];
        kq = new int[n];
        while (!temp.empty())
            temp.pop_front();
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int vt = 0;
        for (int i = 0; i < n; i++)
        {
            while (!temp.empty() && arr[temp.back()] <= arr[i])
                temp.pop_back();
            temp.push_back(i);
            if (temp.front() + k <= i)
                temp.pop_front();
            if (i >= k - 1)
                kq[vt++] = arr[temp.front()];
        }

        for (int i = 0; i < vt; i++)
            cout << kq[i] << " ";
        cout << endl;
        delete[] arr;
    }
}