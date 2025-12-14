#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    map<int, int> mp;
    int l = INT_MAX, r = INT_MIN;

    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      mp[x]++;
      l = min(l, x);
      r = max(r, x);
    }

    int cnt = 0;
    for (int i = l; i < r; i++) {
      if (mp[i] == 0) {
        cnt++;
      }
    }

    cout << cnt << endl;
  }

  return 0;
}