#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    for (int &x: arr) {
        cin >> x;
    }
    int prefix[n + 1];
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        int sum = 0;
        // for (int i = l; i <= r; i++) {
        //     sum += arr[i];
        // } => O(n)
        sum = prefix[r] - prefix[l - 1]; //O(1)

        cout << sum << endl;
    }


    return 0;
}
