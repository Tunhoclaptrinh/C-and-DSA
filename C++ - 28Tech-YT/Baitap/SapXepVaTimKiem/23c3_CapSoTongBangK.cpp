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
    for (int &x : arr) {
      cin >> x;
      mp[x]++;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
      mp[arr[i]]--;          // loại bỏ chính nó ra
      ans += mp[k - arr[i]]; // ghép với những thằng còn lại
    }

    cout << ans;
  }

  return 0;
}