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

        int cnt = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[arr[i][0]] = 1;
        }

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mp[arr[i][j]] == i) {
                    mp[arr[i][j]]++;
                }
            }
        }

        for (auto it: mp) {
            if (it.se == n) {
                cnt++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
