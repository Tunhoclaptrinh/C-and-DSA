#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m], c[k];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < m; i++)
      cin >> b[i];
    for (int i = 0; i < k; i++)
      cin >> c[i];

    sort(a, a + n);
    sort(b, b + m);
    sort(c, c + k);

    vector<int> giao;

    int i = 0, j = 0, h = 0;
    while (i < n && j < m && h < k) {
      if (a[i] == b[j] && b[j] == c[h]) {
        giao.push_back(a[i]);
        i++;
        j++;
        h++;
      } else if (a[i] == min(a[i], min(b[j], c[h]))) {
        i++;
      } else if (b[j] == min(a[i], min(b[j], c[h]))) {
        j++;
      } else if (c[h] == min(a[i], min(b[j], c[h]))) {
        h++;
      }
    }

    if (giao.empty()) {
      cout << -1;
    } else {
      for (int x : giao)
        cout << x << ' ';
    }
  }

  return 0;
}

// 1
//
// 6 5 8
//
// 1 5 10 20 40 80
//
// 6 7 20 80 100
//
// 3 4 15 20 30 70 80 120

// >>==>> 20, 80