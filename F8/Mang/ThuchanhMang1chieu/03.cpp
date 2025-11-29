#include <iostream>
using namespace std;

int main() {
    int numbers[20];
    int n, x, y;
    cout << "Enter n: ";
    cin >> n;

    cout << "Nhap mang" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter y: ";
    cin >> y;

    n++;
    for (int i = n - 1; i > x; i--) {
        numbers[i] = numbers[i - 1];
    }

    numbers[x] = y;

    // in ra mảng đã xử lý
    cout << "Mang sau khi them" << endl;
    for (int i = 0; i < n ; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
