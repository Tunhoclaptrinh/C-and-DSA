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
                    a[i][j]+=0;
                } else if (i == 0) {
                     a[i][j] += a[i][j - 1] ;
                } else if (j == 0) {
                    a[i][j] += a[i - 1][j] ;
                } else {
                    a[i][j] += min(a[i][j - 1], a[i - 1][j]);
                }
            }
        }


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
            cout << '\n';
        }
        cout << a[n - 1][m - 1] << '\n';
    }

    return 0;
}
