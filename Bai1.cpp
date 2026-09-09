#include <iostream>
using namespace std;

double cong(double a, double b)
{
    return a + b;
}

double tru(double a, double b)
{
    return a - b;
}

double nhan(double a, double b)
{
    return a * b;
}

double chia(double a, double b)
{
    if (b == 0)
    {
        cout << "Khong the chia cho 0";
        return 0;
    }
    return a / b;
}

int main()
{
    int luaChon;
    double a, b;

    do
    {
        cout << "----------- May tinh da nang ----------" << endl;
        cout << "1. Cong" << endl;
        cout << "2. Tru" << endl;
        cout << "3. Nhan" << endl;
        cout << "4. Chia" << endl;
        cout << "5. Thoat" << endl;

        cout << "Moi nhap lua chon cua ban: ";
        cin >> luaChon;

        switch (luaChon)
        {
        case 1:
            cout << "Nhap so thu nhat: ";
            cin >> a;
            cout << "Nhap so thu hai: ";
            cin >> b;

            cout << "Ket qua = " << cong(a, b) << endl;
            break;

        case 2:
            cout << "Nhap so thu nhat: ";
            cin >> a;
            cout << "Nhap so thu hai: ";
            cin >> b;

            cout << "Ket qua = " << tru(a, b) << endl;
            break;

        case 3:
            cout << "Nhap so thu nhat: ";
            cin >> a;
            cout << "Nhap so thu hai: ";
            cin >> b;

            cout << "Ket qua = " << nhan(a, b) << endl;
            break;

        case 4:
            cout << "Nhap so thu nhat: ";
            cin >> a;
            cout << "Nhap so thu hai: ";
            cin >> b;

            if (b == 0)
            {
                cout << "Khong the chia cho 0!" << endl;
            }
            else
            {
                cout << "Ket qua = " << chia(a, b) << endl;
            }

            break;

        case 5:
            cout << "Thoat chuong trinh" << endl;
            break;

        default:
            cout << "Lua chon cua ban khong hop le" << endl;
        }
    } while (luaChon != 5);
    return 0;
}