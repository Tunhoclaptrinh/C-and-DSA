#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;

    long long x;
    long long maxA = LLONG_MIN;
    long long minB = LLONG_MAX;

    for (int i = 0; i < n; i++) {
      cin >> x;
      maxA = max(maxA, x);
    }

    for (int i = 0; i < m; i++) {
      cin >> x;
      minB = min(minB, x);
    }

    cout << maxA * minB << '\n';
  }

  return 0;
}
