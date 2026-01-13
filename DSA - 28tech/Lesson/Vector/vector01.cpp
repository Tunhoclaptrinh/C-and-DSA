#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tt;
        cin >> tt;
        if (tt == 1) {
            int x;
            cin >> x;
            v.push_back(x);
        } else if (tt == 2) {
            if (!v.empty()) {
                v.pop_back();
            }
        }
    }
    if (!v.empty()) {
        for (const auto x: v) {
            cout << x << ' ';
        }
    } else {
        cout << "EMPTY";
    }

    return 0;
}
