#include <cmath>
#include <iostream>
using namespace std;

void inputInterger (string label, int &n) {
    cout << label;
    cin >> n;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    if (n == 2) {
        return true;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int toTal(int n) {
    if (n <= 1) {
        return 0;
    }

    if (isPrime(n)) {
        return n + toTal(n - 1);
    } else {
        return toTal(n - 1);
    }
}

int main() {
    int n;
    inputInterger("n = ", n);

    cout << toTal(n);
    return 0;
}
