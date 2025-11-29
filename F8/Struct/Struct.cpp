#include <iostream>

#include <string>

using namespace std;

struct Date {
    int day;
    int month;
    int year;

    Date () {};

    Date (int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }
};

struct SinhVien {
    string hoTen;
    int tuoi;
    double diemTB;
    Date dob;

    // Constructor không tham số
    SinhVien() {
        hoTen = "Chua xac dinh";
        tuoi = 0;
        diemTB = 0.0;
    }

    // Constructor có tham số
    SinhVien(string ten, int t, double dtb, Date _dob) {
        hoTen = ten;
        tuoi = t;
        diemTB = dtb;
        dob = _dob;
    }

    void run() {
        cout << "running" << endl;
    }
};

int main() {
    SinhVien sv1; // gọi constructor mặc định
    SinhVien sv2("Nguyen Van A", 20, 8.5, Date(1,1,2000)); // gọi constructor có tham số

    cout << sv1.hoTen << " - " << sv1.diemTB << endl;
    cout << sv2.hoTen << " - " << sv2.diemTB << endl;

    return 0;
}