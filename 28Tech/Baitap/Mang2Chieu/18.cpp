#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n][3];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> a[i][j];
            }
        }

        int res = 0;
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < 3; j++) {
                if (a[i][j] == 1) {
                    count++;
                }
            }
            if (count >= 2) {
                res++;
            }
        }

        cout << res << '\n';
    }


    return 0;
}

// 1
//
// 3
//
// 1 1 0
//
// 1 1 1
//
// 1 0 0
//
// 2
