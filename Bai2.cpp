#include <iostream>
using namespace std;

bool laSoNguyenTo(int n)
{
    if (n < 2)
    {
        return false;
    }

    bool laNguyenTo = true;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            laNguyenTo = false;
            break;
        }
    }

    return laNguyenTo;
}

void inSoNguyenTo(int a[], int n)
{
    cout << "Cac so nguyen to trong mang la: ";

    for (int i = 0; i < n; i++)
    {
        if (laSoNguyenTo(a[i]))
        {
            cout << a[i] << " ";
        }
    }
}

int main()
{
    int a[100];
    int n;

    cout << "Nhap so luong phan tu: ";
    cin >> n;

    // Nhap mang
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    inSoNguyenTo(a, n);

    return 0;
}