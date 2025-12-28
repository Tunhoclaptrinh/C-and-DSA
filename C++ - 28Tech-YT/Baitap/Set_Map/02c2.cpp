#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
      int k;
      cin >> k;
      s.insert(k);
    }

    int q;
    cin >> q;
    while (q--) {
      int x;
      cin >> x;
      if (s.find(x) != s.end()) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }

      // Hoặc
      // if (s.count(x) != 0) {
      //   cout << "YES" << endl;
      // } else {
      //   cout << "NO" << endl;
      // }
    }
  }

  return 0;
}