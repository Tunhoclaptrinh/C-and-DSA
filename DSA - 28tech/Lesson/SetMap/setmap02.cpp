#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    set<int> se;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        se.insert(x);
    }

    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;
        if (se.find(q) != se.end()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
