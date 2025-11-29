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

        int t = 0, d = n - 1, l = 0, r = m - 1;
        while (t <= d && l <= r) {
            // Xay dung dong tren cung
            for (int i = l; i <= r; i++) {
                cout << a[t][i] << " ";
            }
            t++;

            // Xay cot ben phai
            for (int i = t; i <= d; i++) {
                cout << a[i][r] << " ";
            }
            r--;

            // Xay hang duoi cung
            if (t <= d) {
                for (int i = r; i >= l; i--) {
                    cout << a[d][i] << " ";
                }
                d--;
            }

            // Xay cot ben trai
            if (l <= r) {
                for (int i = d; i >= t; i--) {
                    cout << a[i][l] << " ";
                }
                l++;
            }
        }
    }

    return 0;
}
