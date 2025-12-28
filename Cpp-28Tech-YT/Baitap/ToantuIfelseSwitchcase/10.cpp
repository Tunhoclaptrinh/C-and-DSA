#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    double s = 1 - 1.0 * 1 / (n + 1);

    cout << "Tong day " << n << " = " << s << endl;

    return 0;
}
