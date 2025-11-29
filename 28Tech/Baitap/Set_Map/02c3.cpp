#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
      int k;
      cin >> k;
      mp[k]++;
    }

    int q;
    cin >> q;
    while (q--) {
      int x;
      cin >> x;
      // if (mp.find(x) != s.end()) {
      //   cout << "YES" << endl;
      // } else {
      //   cout << "NO" << endl;
      // }

      // Hoặc
      // if (mp.count(x) != 0) {
      //   cout << "YES" << endl;
      // } else {
      //   cout << "NO" << endl;
      // }

      // Hoặc
      if (mp[x] > 0) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }

  return 0;
}