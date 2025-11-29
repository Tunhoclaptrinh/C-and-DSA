#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


int main() {
    float C,F;
    cin >> C;

    F = (C * 9/5) + 32;
    cout << fixed << setprecision(2) << F << endl;

    return 0;
}
