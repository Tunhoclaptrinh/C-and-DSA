#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, delta;
    cin >> a >> b >> c;
    cout << a << "x^2 + " << b << "x + " << c << endl;

    if (a == 0) {
        if (b == 0 && c == 0) {
            cout << "INF" << endl;
        } else if (b == 0 && c != 0) {
            cout << "NO" << endl;
        } else if (b != 0) {
            cout << fixed << setprecision(2) << -c / (2 * b) << endl;
        }
        return 0;
    }

    delta = pow(b, 2) - 4 * a * c;
    if (delta < 0) {
        cout << "NO" << endl;
    } else if (delta > 0) {
        cout << "Phuong tinh co 2 nghiem: " << endl;
        cout << fixed << setprecision(2) << (-b - sqrt(delta)) / (2 * a) << endl;
        cout << fixed << setprecision(2) << (-b + sqrt(delta)) / (2 * a) << endl;
    } else {
        cout << "Phuong trinh co 1 nghiem kep: " << fixed << setprecision(2) << -b / (2 * a) << endl;
    }
}
