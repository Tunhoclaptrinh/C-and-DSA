#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;

vector<int> unique_vector(vector<int> v) {
    int i = 1;
    while (i < (int) v.size()) {
        if (v[i] == v[i - 1]) {
            v.erase(v.begin() + i);
        } else {
            i++;
        }
    }

    return v;
}

vector<int> nhap() {
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    return v;
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

    vector<int> v = nhap();
    vector<int> res = unique_vector(v);
    in(res);

    return 0;
}
