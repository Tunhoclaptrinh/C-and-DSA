#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n][n];
    vector<map<int, bool> > v;

    for (int i = 0; i < n; i++) {
        map<int, bool> mp;
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            mp[arr[i][j]] = true;
        }
        v.push_back(mp);
    }

    set<int> se;
    for (int i = 0; i < n; i++) {
        int key = arr[0][i];

        // check xem nó có ở tất cả các hàng không
        bool ok = true;
        for (int j = 0; j < n; j++) {
            if (!v[j][key]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            se.insert(key);
        }
    }

    if (se.empty()) {
        cout << "NOT FOUND";
    } else {
        for (auto it: se) {
            cout << it << ' ';
        }
    }

    return 0;
}

