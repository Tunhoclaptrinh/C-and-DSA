#include <iostream>

using namespace std;


int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << "Cach 1:" << endl;

    if (a > b && a > c) {
        cout << a << endl;
        if (b > c) {
            cout << c << endl;
        } else {
            cout << b << endl;
        }
    } else if (b > a && b > c) {
        cout << b << endl;
        if (a > c) {
            cout << c << endl;
        } else {
            cout << a << endl;
        }
    } else {
        cout << c << endl;
        if (b > a) {
            cout << a << endl;
        } else {
            cout << b << endl;
        }
    }

    cout << "Cach 2:" << endl;
    int min = a, max = a;
    if (b > max ) max = b;
    if (c > max) max = c;
    if (b < min ) min = b;
    if (c < min ) min = c;

    cout << min << endl;
    cout << max << endl;

    return 0;
}
