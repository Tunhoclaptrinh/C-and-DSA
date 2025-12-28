#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n << " is even" << endl;
    } else {
        cout << n << " is odd" << endl;
    }

    // hoặc

    cout << !(n % 2) << endl;

    return 0;
}

