#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }
        int res = sum;
        int idx = 0;
        for (int i = k; i < n; i++) {
            sum = sum - arr[i - k] + arr[i] ;
            if (sum > res) {
                res = sum;
                idx = i - k + 1;
            }
        }

        for (int i = 0; i < k; i++) {
            cout << arr[idx + i] << " ";
        }
        cout << endl;
    }

    return 0;
}
