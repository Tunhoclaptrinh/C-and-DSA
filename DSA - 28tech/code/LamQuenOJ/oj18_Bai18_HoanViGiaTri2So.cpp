#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;
    swap(a, b);
    cout << (ll) 128 * a + 97 * b + 1000 << endl;

    return 0;
}
