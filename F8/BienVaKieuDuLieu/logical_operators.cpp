#include <iostream>

int main() {
    bool x = true, y = false;
    std::cout << (x && y) << std::endl; // 0 (false) - cả hai phải true
    std::cout << (x || y) << std::endl; // 1 (true)  - chỉ cần một true
    std::cout << (!x) << std::endl; // 0 (false) - phủ định của true return 0;
}
