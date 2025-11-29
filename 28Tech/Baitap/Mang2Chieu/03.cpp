#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        int arr[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        int max = arr[0][0];
        int rowSum[n];
        memset(rowSum, 0, sizeof(rowSum));
        for (int i = 0; i < n; i++) {
            int sumTmp = 0;
            for (int j = 0; j < m; j++) {
                sumTmp += arr[i][j];
            }

            if (sumTmp > max) {
                max = sumTmp;
            }
        }

        for (int i = 0; i < n; i++) {
            int sumTmp = 0;

            for (int j = 0; j < m; j++) {
                sumTmp += arr[i][j];
            }

            if (sumTmp == max) {
                rowSum[i] = 1;
            }
        }

        cout << max << endl;
        for (int i = 0; i < n; i++) {
            if (rowSum[i] == 1) {
                cout << i + 1 << " ";
            }
        }

        cout << endl;

        return 0;
    }

    return 0;
}
