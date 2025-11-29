#include <bits/stdc++.h>
using namespace std;
using ll = long long;

set<ll> fibo;

void init() {
    ll f[93];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i < 93; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    for (int i = 1; i < 93; i++) {
        fibo.insert(f[i]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    init();
    // for (ll x: fibo) {
    //     cout << x << " ";
    // }

    int tc;
    cin >> tc;
    while (tc--) {
        ll n, m;
        cin >> n >> m;
        ll arr[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        int ans = -1;
        ll sum = 0;
        int idx = 0;
        ll max = 0;
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < m; j++) {
                if (fibo.count(arr[j][i]) == 1) {
                    cnt++;
                    sum += arr[j][i];
                }
            }

            if (cnt > ans) {
                ans = cnt;
                idx = i;
                max = sum;
            } else if (cnt == ans) {
                if (sum > max) {
                    max = sum;
                    idx = i;
                }
            }

            sum = 0;
        }

        cout << idx + 1 << endl;
        // cout << ans << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i][idx] << endl;
        }
    }

    return 0;
}
