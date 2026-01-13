#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int, int> > v(n);

    for (auto &x: v) {
        cin >> x.first >> x.second;
    }

    for (const auto &x: v) {
        cout << fixed << setprecision(2) << sqrt(abs(x.first * x.first + x.second * x.second)) << ' ';
    }

    return 0;
}
