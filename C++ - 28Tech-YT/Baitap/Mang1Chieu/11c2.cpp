#include <bits/stdc++.h>
#include <cstdlib> // rand, srand

using namespace std;
using ll = long long;

const int maxn = 10000;
int a[maxn];
map<int, int> mp;

void solve(int n) {
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            mp[i]++;
            if (i != n / i) mp[n / i]++;
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            solve(arr[i]);
        }
        int res = 1;
        for (auto it: mp) {
            if (it.second >= 2) {
                res = it.first;
            }
        }

        cout << res << endl;
    }

    return 0;
}
