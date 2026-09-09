#include <iostream>
using namespace std;

// Ham in mang
void inMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Ham them phan tu
void themPhanTu(int a[], int &n, int viTri, int giaTri) {

    // Kiem tra vi tri
    if (viTri < 0 || viTri > n) {
        cout << "Vi tri khong hop le!" << endl;
        return;
    }

    // Dich cac phan tu sang phai
    for (int i = n; i > viTri; i--) {
        a[i] = a[i - 1];
    }

    // Them phan tu vao vi tri
    a[viTri] = giaTri;

    // Tang so luong phan tu
    n++;
}

// Ham xoa phan tu
void xoaPhanTu(int a[], int &n, int viTri) {

    // Kiem tra vi tri
    if (viTri < 0 || viTri >= n) {
        cout << "Vi tri khong hop le!" << endl;
        return;
    }

    // Dich cac phan tu sang trai
    for (int i = viTri; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    // Giam so luong phan tu
    n--;
}

int main() {
    int a[100];
    int n;

    cout << "Nhap so luong phan tu: ";
    cin >> n;

    // Nhap mang
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "\nMang ban dau: ";
    inMang(a, n);

    // Them phan tu
    int viTri;
    int giaTri;

    cout << "\nNhap vi tri can them: ";
    cin >> viTri;

    cout << "Nhap gia tri can them: ";
    cin >> giaTri;

    themPhanTu(a, n, viTri, giaTri);

    cout << "Mang sau khi them: ";
    inMang(a, n);

    // Xoa phan tu
    cout << "\nNhap vi tri can xoa: ";
    cin >> viTri;

    xoaPhanTu(a, n, viTri);

    cout << "Mang sau khi xoa: ";
    inMang(a, n);

    return 0;
}