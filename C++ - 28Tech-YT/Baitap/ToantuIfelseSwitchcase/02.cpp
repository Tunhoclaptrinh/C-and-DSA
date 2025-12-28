#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


int main() {
    const float PI = 3.141592653589793;
    int r;
    cin >> r;

    cout << "Chu vi: " << fixed << setprecision(2) << 2 * PI * r << endl;
    cout << "Dien tich: " << fixed << setprecision(2) << PI * r * r << endl;

    return 0;
}
