#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int a[n];

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    map<int, bool> mapB;
    for (int i = 0; i < m; i++) {
      int x;
      cin >> x;
      mapB[x] = true;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
      if (mapB[a[i]]) {
        ans++;
      }
    }

    cout << ans << endl;
  }
  return 0;
}