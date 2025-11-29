#include <iostream>
using namespace std;

int tong(int a, int b) { // a, b là tham số
    return a + b;
}

int main() {
    int x = 5, y = 7;
    cout << tong(x, y);   // x, y là đối số
    cout << tong(10, 20); // 10, 20 là đối số
    return 0;
}
