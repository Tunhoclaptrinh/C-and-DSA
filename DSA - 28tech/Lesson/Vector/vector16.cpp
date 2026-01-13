#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, Q;
    cin >> N >> Q;

    vector<vector<int> > vv(N);
    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            vv[i].push_back(x);
        }
    }

    while (Q--) {
        int x, y;
        cin >> x >> y;

        cout << vv[x - 1][y - 1] << endl;
    }

    return 0;
}
