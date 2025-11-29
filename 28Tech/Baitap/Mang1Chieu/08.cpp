#include <bits/stdc++.h>

using namespace std;
using ll = long long;

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

        int min_val = arr[0];
        int res = -1e9;
        for (int i = 1; i < n; i++) {
            if (arr[i] > min_val) {
                res = max(res, arr[i] - min_val);
            }
            min_val = min(min_val, arr[i]);
        }

        if (res == -1e9) {
            cout << -1;
        } else {
            cout << res;
        }
    }

    return 0;
}
