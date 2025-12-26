#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    set<int> Union;
    set<int> seA;
    set<int> seB;

    for (int i = 0; i < n; i++) {
      cin >> a[i];
      Union.insert(a[i]);
      seA.insert(a[i]);
    }
    for (int i = 0; i < m; i++) {
      cin >> b[i];
      Union.insert(b[i]);
      seB.insert(b[i]);
    }

    for (auto it : Union) {
      cout << it << ' ';
    }
    cout << endl;

    for (auto it : Union) {
      if (seA.find(it) != seA.end() && seB.find(it) != seB.end()) {
        cout << it << ' ';
      }
    }
    cout << endl;
  }

  return 0;
}