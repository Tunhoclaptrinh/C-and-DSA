#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int n;
    cin >> n;
    vector<int> v;
    while (n--) {
        int t;
        cin >> t;
        if (t == 1) {
            int k;
            cin >> k;
            v.push_back(k);
        } else {
            if (v.size() >= 1) {
                v.pop_back();
            }
        }
    }

    if (v.empty()) {
        cout << "EMPTY" << '\n';
    } else {
        // for (int i = 0; i < v.size(); ++i) {
        //     cout << v[i] << ' ';
        // }
        for (auto x: v) {
            cout << x << ' ';
        }
    }

    return 0;
}
