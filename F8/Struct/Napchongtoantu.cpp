#include <iostream>
using namespace std;

struct Diem {
    int x, y;

    // Hàm bạn nạp chồng >>
    friend istream &operator>>(istream &in, Diem &d) {
        cout << "Nhap x y: ";
        in >> d.x >> d.y;
        return in;
    }

    // Hàm bạn nạp chồng <<
    friend ostream &operator<<(ostream &out, const Diem &d) {
        out << "(" << d.x << ", " << d.y << ")";
        return out;
    }

    friend Diem operator+(Diem &d1, Diem &d2) {
        Diem d3;
        d3.x = d1.x + d2.x;
        d3.y = d1.y + d2.y;

        return d3;
    }
};

int main() {
    Diem p1, p2;
    cin >> p1 >> p2;
    cout << "Toa do: " << p1 << p2 << endl;
    cout << p1 + p2 << endl;

    return 0;
}
