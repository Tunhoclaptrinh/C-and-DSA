#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;
    int c;

    // Toán tử số học
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // Toán tử gán mở rộng
    c = a;  // gán
    c += b; // tương đương c = c + b
    cout << "c += b: " << c << endl;

    // Toán tử tăng/giảm
    int x = 5;
    cout << "x++ = " << x++ << " (sau đó x = " << x << ")" << endl;
    cout << "++x = " << ++x << " (tăng trước)" << endl;

    return 0;
}
