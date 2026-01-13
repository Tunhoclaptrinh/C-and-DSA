#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;

void rev(vector<int> &v) {
    int l = 0, r = v.size() - 1;
    while (l <= r) {
        swap(v[l++], v[r--]);
    }
}


void nhap(vector<int> &v) {
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

void in(vector<int> v) {
    for (int x: v) {
        cout << x << ' ';
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    vector<int> v;
    nhap(v);
    rev(v);
    in(v);

    return 0;
}
