#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        vector<int> ARR;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ARR.push_back(a[i][j]);
            }
        }
        sort(ARR.begin(), ARR.end());
        cout << ARR[k] << endl;
    }


    return 0;
}
