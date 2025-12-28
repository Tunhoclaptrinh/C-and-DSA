#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int arr[n + 1][m + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }

    int prefix[n + 1][m + 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            prefix[i][j] = prefix[i - 1][j]
                           + prefix[i][j - 1]
                           - prefix[i - 1][j - 1]
                           + arr[i][j];
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int h1, h2, c1, c2;
        cin >> h1 >> h2 >> c1 >> c2;

        int sum = 0;

        // for (int i = h1; i <= h2; i++) {
        //     for (int j = c1; j <= c2; j++) {
        //         sum += arr[i][j];
        //     }
        // }

        sum = prefix[h2][c2]
              - prefix[h1 - 1][c2]
              - prefix[h2][c1 - 1]
              + prefix[h1 - 1][c1 - 1];

        cout << sum << endl;
    }

    return 0;
}
