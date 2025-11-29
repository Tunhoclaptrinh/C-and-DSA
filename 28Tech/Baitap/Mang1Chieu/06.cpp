#include <bits/stdc++.h>

using namespace std;
using ll = long long;

const int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long Px = 0;
        for (int i = 0; i < n; i++) {
            int lt = pow(x, n - 1 - i);
            Px += arr[i]*lt % MOD;
        }
        cout << Px << endl;

    }

    return 0;
}
