#include <iostream>
using namespace std;

int main() {
    int numbers[20];
    int n, x;
    cout << "Enter n: ";
    cin >> n;

    cout << "Nhap mang" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    cout << "Enter x: ";
    cin >> x;
    numbers[n] = x;
    n++;

    cout << "Mang sau khi them" << endl;
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << endl;
    }

    return 0;
}
