#include <iostream>

using namespace std;

int main() {
    long long a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (d < min) {
        min = d;
    }
    if (e < min) {
        min = e;
    }

    // B2: khởi tạo min2 = số bất kỳ khác min
    long long min2 = 1e18; // số rất lớn
    if (a != min && a < min2) min2 = a;
    if (b != min && b < min2) min2 = b;
    if (c != min && c < min2) min2 = c;
    if (d != min && d < min2) min2 = d;
    if (e != min && e < min2) min2 = e;

    cout << "So nho nhat: " << min << endl;
    cout << "So nho thu 2: " << min2 << endl;

    return 0;
}
