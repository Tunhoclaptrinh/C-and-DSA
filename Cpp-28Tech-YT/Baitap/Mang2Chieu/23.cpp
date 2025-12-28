#include <bits/stdc++.h>

using namespace std;

void dfs() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int dp[n][m];
    for (int i = 0; i < n; i++) {
        dp[i][0] = arr[i][0];
    }

    for (int j = 0; j < m; j++) {
        dp[0][j] = arr[0][j];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (arr[i][j]) {
                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
            } else {
                dp[i][j] = 0;
            }
        }
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            res = max(res, dp[i][j]);
        }
    }

    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    dfs();

    return 0;
}


// 5 5
// 1 1 0 1 0
// 0 1 1 1 0
// 1 1 1 1 0
// 1 1 1 1 1
// 0 0 0 0 0


// ==>
// 1 1 0 1 0
// 0 1 1 1 0
// 1 1 2 2 0
// 1 2 3 3 1
// 0 0 0 0 0


