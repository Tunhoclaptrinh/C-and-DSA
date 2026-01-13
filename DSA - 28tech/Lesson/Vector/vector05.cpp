#include <bits/stdc++.h>
#define ll long long
using namespace std;

void printV(vector<int> v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
    }

    cout << endl;
}

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

    reverse(v.begin(), v.end());
    printV(v);

    reverse(v.begin() + l, v.begin() + r + 1);
    printV(v);

    return 0;
}
