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

    for (int i = x; i < n - 1; i++) {
        numbers[i] = numbers[i + 1];
    }

    // n giảm đi 1
    n--;

    // in ra mảng đã xử lý
    cout << "Mang sau khi xoa" << endl;
    for (int i = 0; i < n - 1 ; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
