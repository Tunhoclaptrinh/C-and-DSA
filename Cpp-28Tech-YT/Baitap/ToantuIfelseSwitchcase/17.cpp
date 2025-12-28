#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n <= 0) {
        cout << "invalid" << endl;
    } else if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // hoặc
    cout << (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)) << endl;

    return 0;
}
