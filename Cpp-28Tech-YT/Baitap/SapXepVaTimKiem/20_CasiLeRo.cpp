#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool cmp(pair<ll, ll> &x, pair<ll, ll> &y) {
  if (x.second != y.second)
    return x.second < y.second;
  return x.first < y.first;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<pair<ll, ll>> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }

  sort(a.begin(), a.end(), cmp);

  ll last_end = -1;
  int count = 0;
  for (auto &p : a) {
    if (p.first > last_end) { // không trùng thời gian
      count++;
      last_end = p.second;
    }
  }

  cout << count << "\n";

  return 0;
}

// 6
// 3 8
// 9 12
// 6 10
// 1 4
// 2 7
// 11 14