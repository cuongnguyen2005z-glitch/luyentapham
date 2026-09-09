#include <iostream>
#include <string>
using namespace std;

string xepLoai(float diem) {
    if (diem >= 8) {
        return "Gioi";
    }
    else if (diem >= 6.5) {
        return "Kha";
    }
    else if (diem >= 5) {
        return "Trung binh";
    }
    else {
        return "Yeu";
    }
}

void inBangXepLoai(float diem[], int n) {
    int demGioi = 0;

    cout << "\n===== BANG XEP LOAI =====" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Sinh vien " << i + 1 << endl;
        cout << "Diem: " << diem[i] << endl;
        cout << "Xep loai: " << xepLoai(diem[i]) << endl;
        cout << "------------------------" << endl;

        if (xepLoai(diem[i]) == "Gioi") {
            demGioi++;
        }
    }

    cout << "So sinh vien dat loai Gioi: " << demGioi << endl;
}

int main() {
    float diem[100];
    int n;

    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Nhap diem sinh vien " << i + 1 << ": ";
        cin >> diem[i];
    }

    inBangXepLoai(diem, n);

    return 0;
}