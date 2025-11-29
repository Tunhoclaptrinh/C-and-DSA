#include <iostream>
#include <cmath> // để dùng abs()

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    cout << "Gia tri nho hon la " << ((a + b) - abs(a - b)) / 2 << endl;

    return 0;
}
