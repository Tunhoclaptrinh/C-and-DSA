#include <iostream>

using namespace std;

// a - z : 97 - 122
// A - Z : 65 - 90
// 0 - 9 : 48 - 57

int main() {
    char c;
    cin >> c;

    if (c >= 'A' && c <= 'Z') {
        c += 32;
    }
    cout << c << endl;

    return 0;
}
