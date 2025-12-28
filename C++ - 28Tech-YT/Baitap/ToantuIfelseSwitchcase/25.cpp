#include <iostream>

using namespace std;

// a - z : 97 - 122
// A - Z : 65 - 90
// 0 - 9 : 48 - 57

int main() {
    char c;
    cin >> c;

    if (c >= 'A' && c <= 'Z' || (c >= 97 && c <= 122)) {\
        if (c == 'z' || c == 'Z') {
            cout << 'a' << endl;
            return 0;
        } else if ((c >= 'A' && c < 'Z')) {
            c += 32;
            ++c;
        } else {
            ++c;
        }
    } else {
        cout << "Invalid" << endl;
    }

    cout << c << endl;

    return 0;
}
