#include <cmath>
#include <iostream>
using namespace std;

void inputInterger (string label, int &n) {
    cout << label;
    cin >> n;
}

unsigned long long factor(int n) {

    if (n <= 1) {
        return 1;
    }

    return n * factor(n - 1);
}

int main() {
    int n;
    inputInterger("n = ", n);

    cout << factor(n);


    return 0;
}
