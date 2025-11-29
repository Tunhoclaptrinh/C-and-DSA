#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool isTriangle = (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a);
    bool isEquilateralTriangle = isTriangle && (a == b && b == c);
    bool isIsoscelesTriangle = isTriangle && (a == b || a == c || b == c);
    bool isRightTriangle = isTriangle &&
                           (
                               pow(a, 2) + pow(b, 2) == pow(c, 2) ||
                               pow(a, 2) + pow(c, 2) == pow(b, 2) ||
                               pow(b, 2) + pow(c, 2) == pow(a, 2)
                           );

    bool isIsoscelesRightTriangle = isRightTriangle && isIsoscelesTriangle;

    if (!isTriangle) {
        cout << "Invalid" << endl;
        return 0;
    } else {
        if (isEquilateralTriangle) {
            cout << 1 << endl;
            return 0; //deu
        } else if (isIsoscelesRightTriangle) {
            cout << 4 << endl;
            return 0; //vuong can
        } else if (isIsoscelesTriangle) {
            cout << 2 << endl;
            return 0; // can
        } else if (isRightTriangle) {
            cout << 3 << endl;
            return 0; // vuong
        } else {
            cout << 5 << endl;
        };
    }
    return 0;
}
