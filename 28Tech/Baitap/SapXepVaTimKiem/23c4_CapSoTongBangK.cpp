#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;

    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      mp[arr[i]]++;
    }

    long long ans = 0;

    for (int x : arr) {
      ans += mp[k - x];
      if (k == 2 * x) {
        ans--; // bỏ cặp trùng của chính nó
      }
    }

    cout << ans / 2 << endl;
  }

  return 0;
}