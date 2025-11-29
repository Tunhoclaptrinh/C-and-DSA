#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        int dp[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 && j == 0) {
                    dp[i][j] = a[i][j];
                } else if (i == 0) {
                    dp[i][j] = dp[i][j - 1] + a[i][j];
                } else if (j == 0) {
                    dp[i][j] = dp[i - 1][j] + a[i][j];
                } else {
                    dp[i][j] = min(dp[i][j - 1], dp[i - 1][j]) + a[i][j];
                }
            }
        }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << dp[i][j] << " ";
            }
            cout << '\n';
        }
        cout << '\n';
        cout << dp[n - 1][m - 1] << '\n';
    }

    return 0;
}
