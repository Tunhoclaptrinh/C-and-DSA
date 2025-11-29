#include <iostream>
using namespace std;

int main() {
    float degF;
    cout << "degF = " << endl;
    cin >> degF;

    cout << "degC = " << (degF - 32) / 1.8 << endl;

    return 0;
}
