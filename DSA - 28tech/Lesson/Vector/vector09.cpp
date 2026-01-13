#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int> > v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        bool found = false;
        for (auto &p: v) {
            if (x == p.first) {
                p.second++;
                found = true;
            }
        }

        if (!found) {
            v.push_back({x, 1});
        }
    }

    for (auto x: v) {
        cout << x.first << ' ' << x.second << endl;
    }

    return 0;
}
