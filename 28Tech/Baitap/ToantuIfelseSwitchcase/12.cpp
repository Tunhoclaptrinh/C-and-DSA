#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "Tong day " << n << " = " << n / 2 << endl;
    } else {
        cout << "Tong day " << n << " = " << (n - 1) / 2 - n << endl;
    }


    return 0;
}
