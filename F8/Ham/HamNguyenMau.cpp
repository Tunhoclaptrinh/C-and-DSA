#include <iostream>

using namespace std;

// Hàm nguyên mẫu
int tong(int a, int b);

int main() {
    cout << "Tổng = " << tong(5, 7); // Gọi hàm trước khi định nghĩa return 0;
}

// Định nghĩa hàm
int tong(int a, int b) {
    return a + b;
}