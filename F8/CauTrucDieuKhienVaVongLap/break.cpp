#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break; // Dừng vòng lặp khi i = 5
        }
        cout << i << " ";
    }
    return 0;
}
