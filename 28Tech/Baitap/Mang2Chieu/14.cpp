#include <bits//stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (j == 0) {
                    a[i][j] += max(a[i - 1][j], a[i - 1][j + 1]);
                } else if (j == m - 1) {
                    a[i][j] += max(a[i - 1][j], a[i - 1][j]);
                } else {
                    a[i][j] += max(a[i - 1][j], a[i - 1][j - 1], a[i - 1][j + 1]);
                }
            }
        }

        cout << *max_element(a[n - 1], a[n - 1] + m) << '\n';
    }

    return 0;
}
