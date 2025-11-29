#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Bỏ qua số chẵn
        }
        cout << i << " ";
    }
    return 0;
}