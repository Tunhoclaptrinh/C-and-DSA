#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<pair<char, int> > v;
    for (int i = 0; i < n; i++) {
        pair<char, int> x;
        cin >> x.first >> x.second;
        if (x.first == 'u' || x.first == 'e' || x.first == 'o' || x.first == 'a' || x.first == 'i') {
            v.push_back(x);
        }
    }

    if (!v.empty())
        for (int i = (int) v.size() - 1; i >= 0; i--) {
            cout << v[i].first << ' ' << v[i].second << endl;
        }

    else cout << "28tech ";


    return 0;
}
