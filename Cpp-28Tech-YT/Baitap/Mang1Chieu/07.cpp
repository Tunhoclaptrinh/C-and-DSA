#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int Fib(int fi) {
    if (fi == 0) {
        return 0;
    } else if (fi == 1) {
        return 1;
    }

    return Fib(fi - 1) + Fib(fi - 2);
}

int f[1001];

void khoiTao() {
    int fibo[20];
    for (int i = 0; i < 20; i++) {
        fibo[i] = Fib(i);
    }
    // for (int i = 0; i < 20; i++) {
    //     cout << fibo[i] << " ";
    // }
    for (int i = 0; fibo[i] < 1000; i++) {
        f[fibo[i]] = 1;;
    }

}

int main() {
    int t;
    cin >> t;

    khoiTao();
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];

            if (f[arr[i]]) {
                cout << arr[i] << " ";
            }
        }
    }

    // in ra mảng đánh dấu
    // for (int i = 0; i < 1000; i++) {
    //     cout << f[i] << " ";
    // }

    return 0;
}
