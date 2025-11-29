#include <iostream>

using namespace std;

void xinChao() {
    cout << "Xin chào bạn!" << endl;
}

int tong(int a, int b) {
    return a + b;
}

int main() {
    xinChao(); // Gọi hàm return 0;

    int kq = tong(5, 7);
    cout << "Tổng = " << kq << endl;
    return 0;
}