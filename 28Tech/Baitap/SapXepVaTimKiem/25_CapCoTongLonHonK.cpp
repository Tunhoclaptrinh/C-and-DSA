#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    sort(arr, arr + n);

    int ans = 0;

    for (int i = 0; i < n; i++) {
      long long need = k - arr[i];
      auto it = upper_bound(arr + i + 1, arr + n, need);
      ans += (arr + n - it);
    }

    cout << ans << endl;
  }
}