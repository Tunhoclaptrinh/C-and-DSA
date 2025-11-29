#include <iostream>
#include <string>
using namespace std;

struct SinhVien {
    string hoTen;
    int tuoi;
    double diemTB;
};

int main() {
    SinhVien sv = {"Nguyen Van A", 20, 8.5};
    SinhVien *p = &sv; // con trỏ p trỏ đến sv

    // Truy cập qua con trỏ
    cout << (*p).hoTen << " - " << (*p).diemTB << endl;
    cout << p->hoTen << " - " << p->diemTB << endl; // dùng -> thay cho (*p).
    p->diemTB = 9.0; // chỉnh sửa qua con trỏ
    cout << sv.hoTen << " - " << sv.diemTB << endl;

    return 0;
}

