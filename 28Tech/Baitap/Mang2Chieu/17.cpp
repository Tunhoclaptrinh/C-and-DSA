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

        // cần một mảng phụ, nếu thay đổi luôn trên mảng gốc sẽ dẫn đến sai
        // (vì thay đôi từ 0 => 1 sẽ dẫn đến các chỗ khác)

        int res[n][m];


        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 1) {
                    for (int k = 0; k < m; k++) {
                        res[i][k] = 1;
                    }
                    for (int k = 0; k < n; k++) {
                        res[k][j] = 1;
                    }
                } else {
                    res[i][j] = 0;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << res[i][j] << " ";
            }
            cout << '\n';
        }
    }


    return 0;
}


// 1
//
// 3 4
//
// 1 0 0 1
//
// 0 0 1 0
//
// 0 0 0 0
//
//
// 1 1 1 1
// 1 1 1 1
// 1 0 1 1
