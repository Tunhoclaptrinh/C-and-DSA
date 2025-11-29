
#include <iostream>
#include <bits/stdc++.h>
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

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }


        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                for (int j = 0; j < m; j++) {
                    cout << arr[i][j] << " ";
                }
            } else {
                for (int j = m - 1; j > -1; j--) {
                    cout << arr[i][j] << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
