#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Nhap mot so: ";
    cin >> x;

    if (x >= 0) {
        cout << "So duong hoac 0" << endl;
    } else {
        cout << "So am" << endl;
    }

    return 0;
}
