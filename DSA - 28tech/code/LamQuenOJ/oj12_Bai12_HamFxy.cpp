#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll F(ll x, ll y) {
    ll res = 5 * x + 2 * y + x * y;
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll x, y; // này thi đỡ phải ép kiểu từng phép tính
    cin >> x >> y;

    cout << F(x, y) << endl;

    return 0;
}
