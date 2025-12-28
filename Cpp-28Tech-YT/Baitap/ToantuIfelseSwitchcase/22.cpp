#include <iostream>

using namespace std;

// a - z : 97 - 122
// A - Z : 65 - 90
// 0 - 9 : 48 - 57

int main() {
    char c;
    cin >> c;

    if (c >= '0' && c <= '9') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}