#include <bits/stdc++.h>
#define ll long long
using namespace std;

void nhap(vector<vector<int> > &v, int n, int m) {
    for (int i = 0; i < n; i++) {
        vector<int> list;
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            list.push_back(x);
        }
        v.push_back(list);
    }
}

void xuat(vector<vector<int> > v, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }
}

void lat(vector<vector<int> > &v, int n, int m) {
    for (int i = 0; i < n; i++) {
        reverse(v[i].begin(), v[i].end());
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

    int n, m;
    cin >> n >> m;
    vector<vector<int> > v;
    nhap(v, n, m);
    lat(v, n, m);
    xuat(v, n, m);

    return 0;
}
