#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    } else if (n == 2) {
        return true;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        map<int, bool> mp;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
                if (isPrime(arr[i][j]) && !mp[arr[i][j]]) {
                    cout << arr[i][j] << " ";
                    mp[arr[i][j]] = true;
                }
            }
        }
    }

    return 0;
}
