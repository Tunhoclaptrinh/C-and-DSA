#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b;
    cin >> a >> b;
    int count = 0;

    for (ll i = a; i < b; i++) {
        count++;
    }

    cout << count << endl;

    return 0;
}
