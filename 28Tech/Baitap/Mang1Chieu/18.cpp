#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for ( int &x : arr) cin >> x;
        int left = 0, res = 1e9;
        ll sum = 0;
        for ( int r = 0; r < n; r++ ) {
            sum += arr[r];
            while ( sum >= x ) {
                res = min(res, r - left + 1);
                sum -= arr[left];
                left++;
            }
        }
        if (res == 1e9) {
            cout << "-1\n";
        } else {
            cout << res << "\n";
        }


    }
    return 0;
}
