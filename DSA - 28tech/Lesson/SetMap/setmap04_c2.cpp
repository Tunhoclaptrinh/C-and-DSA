#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<ll, int> mp;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        mp[x]++;
    }

    int q;
    cin >> q;
    while (q--) {
        int action;
        cin >> action;
        if (action == 1) {
            ll x;
            cin >> x;
            mp[x]++;
        } else if (action == 2) {
            ll key;
            cin >> key;
            if (mp[key]) {
                mp[key]--;
            }
        } else if (action == 3) {
            ll key;
            cin >> key;

            if (mp[key]) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
