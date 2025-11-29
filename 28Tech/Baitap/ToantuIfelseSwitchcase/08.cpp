#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long s = 1ll * n * (n + 1) / 2;

    cout << "Tong day " << n << " = " << s << endl;

    return 0;
}
