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
        int arr[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
        while (c1 < c2 && h1 < h2) {
            int prev = arr[h1 + 1][c1];
            for (int i = c1; i <= c2; i++) {
                int curr = arr[h1][i];
                arr[h1][i] = prev;
                prev = curr;
            }
            h1++;

            for (int i = h1; i <= h2; i++) {
                int curr = arr[i][c2];
                arr[i][c2] = prev;
                prev = curr;
            }
            c2--;

            if (h1 <= h2) {
                for (int i = c2; i >= c1; i--) {
                    int curr = arr[h2][i];
                    arr[h2][i] = prev;
                    prev = curr;
                }
                h2--;
            }

            if (c1 <= c2) {
                for (int i = h2; i >= h1; i--) {
                    int curr = arr[i][c1];
                    arr[i][c1] = prev;
                    prev = curr;
                }
                c1++;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << arr[i][j] << "" ;
            }
            cout << endl;
        }

    }
    return 0;
}
