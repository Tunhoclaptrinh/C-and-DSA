#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--) {
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);
    for (auto &x : a)
      cin >> x;

    sort(a.begin(), a.end());

    long long ans = 0;

    for (int i = 0; i < n; i++) {
      long long need = k - a[i];

      auto it1 = lower_bound(a.begin() + i + 1, a.end(), need);
      auto it2 = upper_bound(a.begin() + i + 1, a.end(), need);

      ans += (it2 - it1);
    }

    cout << ans << '\n';
  }
}
