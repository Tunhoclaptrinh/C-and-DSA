#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> a, b;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      a.push_back(x);
    }

    for (int i = 0; i < m; i++) {
      int x;
      cin >> x;
      b.push_back(x);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // merge
    vector<int> giao, hop;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size()) {
      if (a[i] == b[j]) {
        hop.push_back(a[i++]);
        giao.push_back(b[j++]);
      } else if (a[i] < b[j]) {
        hop.push_back(a[i++]);
      } else {
        hop.push_back(b[j++]);
      }
    }

    while (i < a.size()) {
      hop.push_back(a[i++]);
    }

    while (j < b.size()) {
      hop.push_back(b[j++]);
    }

    for (int x : hop) {
      cout << x << ' ';
    }
    cout << endl;
    for (int x : giao) {
      cout << x << ' ';
    }
    cout << endl;
  }

  return 0;
}