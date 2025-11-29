#include <iostream>
using namespace std;

int giaiThua(int n) {
    if (n <= 1) return 1;       // Điều kiện dừng
    return n * giaiThua(n - 1); // Lời gọi đệ quy
}

int main() {
    int n = 5;
    cout << "5! = " << giaiThua(n); // 120
    return 0;
}
