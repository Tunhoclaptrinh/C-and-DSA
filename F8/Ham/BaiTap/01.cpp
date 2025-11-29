#include <cmath>
#include <iostream>
#include <string>

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

int main() {
    int n;
    inputInterger("n = ", n);

    if (isPrime(n)) {
        cout << n << " la so nguyen to" << endl;
    } else {
        cout << n << " khong la so nguyen to" << endl;
    }


    return 0;
}
