#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int &x : a)
      cin >> x;
    for (int &x : b)
      cin >> x;

    sort(a, a + n);
    sort(b, b + m);

    int i = 0, j = 0;
    vector<int> giao, hop;

    while (i < n && j < m) {
      if (a[i] == b[j]) {
        hop.push_back(a[i]);
        giao.push_back(b[j]);
        i++;
        j++;
      } else if (a[i] < b[j]) {
        hop.push_back(a[i++]);
      } else {
        hop.push_back(b[j++]);
      }
    }

    while (j < m) {
      hop.push_back(b[j++]);
    }

    while (i < n) {
      hop.push_back(a[i++]);
    }

    for (int x : hop)
      cout << x << ' ';

    cout << endl;

    for (int x : giao)
      cout << x << ' ';

    cout << endl;
  }

  return 0;
}