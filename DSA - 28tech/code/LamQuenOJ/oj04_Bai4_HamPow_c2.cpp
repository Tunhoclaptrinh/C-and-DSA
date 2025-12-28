#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, y;
    cin >> x >> y;

    ll res = 1;
    for (int i = 0; i < y; i++) {
        res *= x;
    }

    cout << res << endl;

    return 0;
}
