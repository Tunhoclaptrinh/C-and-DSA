#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int maxn = 1e6;
int a[maxn], n;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int res = 0;
        for (int i = 0; i < n; i++) {
            res = gcd(arr[i], res);
        }

        if (res == 1) {
            cout << 0 << endl;
            continue;
        }

        int ans = 1; // chính nó
        for (int i = 2; i < sqrt(res); i++) {
            if ((res % i) == 0) {
                ++ans;
                if (i != ans / i) {
                    ++ans;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
