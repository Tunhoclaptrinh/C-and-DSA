#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x: v) {
        cin >> x;
    }

    int l, r;
    cin >> l >> r;

    for (vector<int>::iterator it = v.begin() + l; it != v.begin() + r + 1; it++) {
        cout << *it << ' ';
    }
    cout << endl;

    // for (vector<int>::reverse_iterator it = v.rend() - r - 1; it != v.rend() - l; it++) {
    //     cout << *it << ' ';
    // }

    // OR

    for (vector<int>::iterator it = v.begin() + r; it != v.begin() + l - 1; it--) {
        cout << *it << ' ';
    }


    return 0;
}
