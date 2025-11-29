#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin >> n >> c;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int cnt = 1;

        for (int i = 0; i < n; i++) {
            if (arr[i] - arr[i - 1] <=c) {
                cnt++;
            }
            else cnt = 1;
        }

    }
    return 0;
}
