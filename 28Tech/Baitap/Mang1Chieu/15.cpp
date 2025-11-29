#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int res = 1, count = 1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                count++;
            } else {
                count = 1;
            }
            res = max(res, count);
        }

        cout << n - res << endl;
    }
    return 0;
}
