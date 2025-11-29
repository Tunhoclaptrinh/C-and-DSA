#include <iostream>

using namespace std;

int main() {
    int n;
    nhap_lai: // label - nhan
        cout << "Nhap so duong: ";
        cin >> n;

    if (n < 0) {
        goto nhap_lai;
    }

    cout << "So ban nhap: " << n << endl;
    return 0;
}