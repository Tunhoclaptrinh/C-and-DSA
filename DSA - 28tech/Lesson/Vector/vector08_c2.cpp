#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<pair<int, int>, int> > v(n);

    for (auto &x: v) {
        cin >> x.first.first >> x.first.second >> x.second;
    }

    for (vector<pair<pair<int, int>, int> >::iterator it = v.begin(); it != v.end(); it++) {
        cout << (*it).first.first + (*it).first.second + (*it).second << ' ';
    }

    return 0;
}
