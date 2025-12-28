#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a; cin >> a;
        map<ll, bool> mp;
        for (ll i = 0; i < a; i++) {
            ll x ;
            cin >> x;
            mp[x] = true;
        }

        for (int i = 0; i < a; i++) {
            if (mp[i]) {
                cout << i << " ";
            } else {
                cout << "-1 ";
            }
        }

    }

    return 0;
}
