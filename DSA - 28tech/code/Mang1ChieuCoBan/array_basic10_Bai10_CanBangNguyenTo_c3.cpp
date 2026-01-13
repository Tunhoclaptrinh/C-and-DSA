#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool snt(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    int right = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        right += a[i];
    }

    right -= a[0];
    for (int i = 1; i < n - 1; i++) {
        right -= a[i];
        if (snt(a[i - 1]) && snt(right)) cout << i << ' ';
        a[i] += a[i - 1];
    }

    return 0;
}
