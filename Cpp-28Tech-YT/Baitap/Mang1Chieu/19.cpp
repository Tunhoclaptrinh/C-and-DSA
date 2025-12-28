#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        if (n % 2 == 1) {
            cout << arr[n / 2] << '\n';
        }
        else {
            cout << arr[n / 2 - 1] << '\n';
        }

    }
    return 0;
}
