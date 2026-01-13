#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;

bool isPrime(int n) {
    if (n < 2) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

vector<int> prime_list(vector<int> v) {
    vector<int> tmp;
    for (int x: v) {
        if (isPrime(x)) {
            tmp.push_back(x);
        }
    }

    return tmp;
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
    vector<int> res = prime_list(v);
    in(res);

    return 0;
}
