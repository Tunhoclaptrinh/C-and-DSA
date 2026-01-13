#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> arr;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        arr.push_back(x);
    }

    int q;
    cin >> q;
    while (q--) {
        int action;
        cin >> action;
        if (action == 1) {
            ll x;
            cin >> x;
            arr.push_back(x);
        } else if (action == 2) {
            ll key;
            cin >> key;
            for (auto it = arr.begin(); it != arr.end(); it++) {
                if (*it == key) {
                    arr.erase(it);
                }
            }
        } else if (action == 3) {
            bool found = false;

            ll key;
            cin >> key;

            for (auto it = arr.begin(); it != arr.end(); it++) {
                if (*it == key) {
                    found = true;
                    break;
                }
            }

            if (found) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
