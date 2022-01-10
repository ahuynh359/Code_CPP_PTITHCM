#include<iostream>
using namespace std;



bool KTLon(const long int* arr, int vt, int n) {

    for (int i = vt + 1; i < n; i++) {
        if (arr[vt] <= arr[i])
            return false;
    }

    return true;
}

void swap(long int* a, long  int* b) {
    long int t = *a;
    *a = *b;
    *b = t;
}

void quickSort(long int* Data, int l, int r)
{

    if (l <= r)
    {

        int key = Data[(l + r) / 2];
        int i = l;
        int j = r;

        while (i <= j)
        {
            while (Data[i] > key)
                i++;
            while (Data[j] < key)
                j--;

            if (i <= j)
            {
                swap(&Data[i], &Data[j]);
                i++;
                j--;
            }
        }


        if (l < j)
            quickSort(Data, l, j);
        if (r > i)
            quickSort(Data, i, r);
    }
}

int main() {
    long int* arr;
    long int* kq;

    int n;
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        arr = new long int[n];
        kq = new long int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];

        }

        int vt = 0;
        for (int i = 0; i < n; i++) {

            if (KTLon(arr, i, n)) {
                kq[vt] = arr[i];
                vt++;
            }

        }

        if (vt != 0) {
            quickSort(kq, 0, vt - 1);
            for (int i = 0; i < vt; i++)
                cout << kq[i] << " ";

        }
        else
            cout << arr[n - 1];

        cout << endl;

        delete[] arr;
        delete[] kq;
    }


    return 0;
}
