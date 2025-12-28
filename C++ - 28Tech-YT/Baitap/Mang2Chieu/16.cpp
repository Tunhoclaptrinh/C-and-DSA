#include <bits//stdc++.h>

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
        int arr[n][m];
        int cheoChinh[n][m], cheoPhu[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || j == 0) {
                    cheoChinh[i][j] = arr[i][j];
                } else {
                    cheoChinh[i][j] = cheoChinh[i - 1][j - 1] + arr[i][j];
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || j == m - 1) {
                    cheoPhu[i][j] = arr[i][j];
                } else {
                    cheoPhu[i][j] = cheoPhu[i - 1][j + 1] + arr[i][j];
                }
            }
        }


        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         cout << cheoChinh[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        //
        // cout << endl;
        //
        //
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         cout << cheoPhu[i][j] << " ";
        //     }
        //     cout << endl;
        // }


        ll ans = -1e18;
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                // Lấy kích cỡ bé nhất của ma trận vuông con có thể
                int tmp = min(j, i);

                // lấy vị trí hàng, cột
                int hang = i - tmp, cot = j - tmp;

                // tính toán ans
                for (int k = 0; k < min(i, j); k++) {
                    ans = max(ans, 0ll + cheoChinh[i][j] - cheoChinh[hang + k][cot + k]) -
                          cheoPhu[i][cot + k + 1] - cheoPhu[hang + k][j + 1];
                }
            }
        }

        cout << ans << '\n';
    }

    // 1

    // 4 4
    //
    // 9 -2 -8 0
    //
    // -6 -2 0 9
    //
    // 4 -5 6 1
    //
    // 1 3 4 9

    return 0;
}
