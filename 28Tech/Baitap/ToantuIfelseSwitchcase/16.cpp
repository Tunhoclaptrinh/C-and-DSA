#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n % 3 == 0 && n % 5 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    // hoặc
    cout << !(n % 15) << endl;

    return 0;
}
