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

    sort(v.begin(), v.end());
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
    }

    cout << endl;

    // for (vector<int>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it) {
    //     cout << *it << ' ';
    // }

    // OR
    for (vector<int>::iterator it = v.end() - 1; it != v.begin() - 1; it--) {
        cout << *it << ' ';
    }

    return 0;
}
