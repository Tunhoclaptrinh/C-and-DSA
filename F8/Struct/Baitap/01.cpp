#include <iostream>

using namespace std;

const float PI = 3.14159265358979323846;

struct Circle {
    float r;

    friend istream& operator>>(istream& is, Circle& c) {
        cout << "Nhap ban kinh: ";
        is >> c.r;

        return is;
    }

    float chu_vi() {
        // r*2*PI;

        return r * 2 * PI;
    }

    float dien_tich() {
        // r*r*PI

        return r * r * PI;
    }
};

int main () {

    Circle circle;

    cin >> circle;

    cout << "Chu vi hinh tron: " << circle.chu_vi() << endl;
    cout << "Dien tich tron: " << circle.dien_tich() << endl;


    return 0;
}