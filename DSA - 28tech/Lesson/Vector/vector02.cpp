#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int m;
    cin >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++) cin >> v[i];
    int n;
    cin >> n;
    while (n--) {
        int tt;
        cin >> tt;
        if (tt == 1) {
            int pos, val;
            cin >> pos >> val;
            if (pos >= 0 && pos <= (int) v.size()) {
                v.insert(v.begin() + pos, val);
            }
        } else {
            int pos;
            cin >> pos;
            if (pos >= 0 && pos <= (int) v.size()) {
                v.erase(v.begin() + pos);
            }
        }
    }

    if (!v.empty()) {
        for (const auto x: v) {
            cout << x << ' ';
        }
    } else {
        cout << "EMPTY";
    }

    return 0;
}
