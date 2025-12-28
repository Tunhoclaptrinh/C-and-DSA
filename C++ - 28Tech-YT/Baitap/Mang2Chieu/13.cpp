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
        vector<int> res;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                res.push_back(a[i][j]);
            }
        }

        for (int i = 0; i < res.size() - 1; i++) {
            int minIdx = i;
            for (int j = i + 1; j < res.size(); j++) {
                if (res[j] < res[minIdx]) {
                    minIdx = j;
                }
            }
            if (minIdx != i) {
                swap(res[i], res[minIdx]);
            }
        }


        int t = 0, d = n - 1, l = 0, r = m - 1;
        int cnt = 0;
        while (t <= d && l <= r) {
            // Xay dung dong tren cung
            for (int i = l; i <= r; i++) {
                a[t][i] = res[cnt++];
            }
            t++;

            // Xay cot ben phai
            for (int i = t; i <= d; i++) {
               a[i][r] = res[cnt++];
            }
            r--;

            // Xay hang duoi cung
            if (t <= d) {
                for (int i = r; i >= l; i--) {
                    a[d][i] = res[cnt++];
                }
                d--;
            }

            // Xay cot ben trai
            if (l <= r) {
                for (int i = d; i >= t; i--) {
                    a[i][l] = res[cnt++];
                }
                l++;
            }
        }
    }

    return 0;
}
