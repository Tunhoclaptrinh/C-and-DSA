#include <bits/stdc++.h>
using namespace std;

vector<char> Next(vector<char> &res, int idx, char ch) {
    if (idx == res.size()) {
        return res;
    }

    if (idx > 0 && res[idx - 1] != 'H') {
        res[idx] = 'H';
    } else {
        res[idx] = 'A';
    }

    return Next(res, idx + 1, res[idx]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<char> KQ(n, 'A');
        KQ[0] = 'H';

        vector<char> ans = Next(KQ, 1, 'A');

        for (char c : ans) cout << c;
        cout << "\n";
    }

    return 0;
}
