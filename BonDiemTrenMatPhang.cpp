#include <iostream>

using namespace std;
struct Diem
{
    double x, y, z;
};

Diem tichCoHuong(Diem d1, Diem d2)
{
    double x, y, z;
    x = d1.y * d2.z - d2.y * d1.z;
    y = d1.z * d2.x - d2.z * d1.x;
    z = d1.x * d2.y - d2.x * d1.y;
    return Diem{x, y, z};
}

Diem tinhDuongThang(Diem d1, Diem d2)
{
    return {d2.x - d1.x, d2.y - d1.y, d2.z - d1.z};
}

int main()
{
    int r;
    Diem arr[4];

    cin >> r;
    while (r--)
    {

        for (int i = 0; i < 4; i++)
            cin >> arr[i].x >> arr[i].y >> arr[i].z;

        Diem t1, t2, t3, t;
        t1 = tinhDuongThang(arr[0], arr[1]);
        t2 = tinhDuongThang(arr[0], arr[2]);
        t3 = tinhDuongThang(arr[0], arr[3]);
        t = tichCoHuong(t1, t2);

        if (t.x * t3.x + t.y * t3.y + t.z * t3.z == 0)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
}