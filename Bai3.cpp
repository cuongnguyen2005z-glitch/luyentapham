#include <iostream>
using namespace std;

// Ham nhap mang
void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

// Ham tim gia tri lon nhat
int timMax(int a[], int n) {
    int max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

// Ham tim gia tri nho nhat
int timMin(int a[], int n) {
    int min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }

    return min;
}

// Ham tinh gia tri trung binh
double tinhTrungBinh(int a[], int n) {
    int tong = 0;

    for (int i = 0; i < n; i++) {
        tong = tong + a[i];
    }

    return (double)tong / n;
}

int main() {
    int a[100];
    int n;

    cout << "Nhap so luong phan tu: ";
    cin >> n;

    nhapMang(a, n);

    int max = timMax(a, n);
    int min = timMin(a, n);
    double trungBinh = tinhTrungBinh(a, n);


    cout << "Gia tri lon nhat = " << max << endl;
    cout << "Gia tri nho nhat = " << min << endl;
    cout << "Gia tri trung binh = " << trungBinh << endl;

    return 0;
}