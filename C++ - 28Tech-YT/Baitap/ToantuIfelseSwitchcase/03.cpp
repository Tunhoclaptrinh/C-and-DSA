#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cout << "x1 = " << x1 << endl;
    cout << "y1 = " << y1 << endl;
    cin >> x2 >> y2;
    cout << "x2 = " << x2 << endl;
    cout << "y2 = " << y2 << endl;
    double dis = (double) sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Khoang cach: " << fixed << setprecision(2) << dis << endl;

    return 0;
}
