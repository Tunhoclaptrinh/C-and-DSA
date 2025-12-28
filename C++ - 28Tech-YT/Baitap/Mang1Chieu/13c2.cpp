#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        ll sum = 0, halfSum = 0;
        bool flag = false;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        for (int i = 0; i < n; i++) {
            sum -= arr[i];
            if (sum == halfSum) {
                cout << i << '\n';
                flag = true;
                // break;
            }
            halfSum += arr[i];
        }
        if (!flag) {
            cout << -1 << '\n';
        }
    }

    return 0;
}
