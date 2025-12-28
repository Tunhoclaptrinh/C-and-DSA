#include <iostream>

using namespace std;

// break
// continue

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i == 39) {
            continue;
        }

        cout << i << endl;

        if (i == 40) {
            break;
        }
    }

    return 0;
}
