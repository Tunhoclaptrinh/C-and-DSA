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
        vector<int> row;
        for (int i = 0; i < n; i++) {
            int sumTmp = 0;
            for (int j = 0; j < m; j++) {
                sumTmp += arr[i][j];
            }

            if (sumTmp > max) {
                max = sumTmp;
                row.clear();
            }

            if (sumTmp == max) {
                row.push_back(i);
            }
        }

        cout << max << endl;
        for (int i = 0; i < row.size(); i++) {
            cout << row[i] + 1 << " ";
        }

        cout << endl;

        return 0;
    }

    return 0;
}
