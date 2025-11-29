#include <iostream>

using namespace std;

// break
// continue

int main() {
    int i = 1;
    while (i <= 10) {
        if (i == 5) {
            i++; // khong co cai nay la lap vo tan
            continue;
        }
        cout << i << endl;
        i++;
        if (i == 9) {
            break;
        }
    }

    return 0;
}
