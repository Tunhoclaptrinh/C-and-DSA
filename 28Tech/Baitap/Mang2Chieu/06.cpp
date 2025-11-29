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
        int arr[n][m];
        int res[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < m; j++) {
                int sum = 0;
                for (int k = i - 1; k <= i + 1; k++) {
                    if (k < 0 || k >= n){
                        continue;
                    }
                    for (int l = j - 1; l <= j + 1; l++) {
                        if (l < 0 || l >= m) {
                            continue;
                        }
                        sum += arr[k][l];
                    }
                }

                res[i][j] = sum;
                cout << res[i][j] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}
