#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y) {
  if (abs(x.first) != abs(y.first)) {
    return abs(x.first) < abs(y.first);
  }
  return x.second < y.second;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    pair<int, int> v[n];

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      v[i].first = arr[i];
      v[i].second = i;
    }

    sort(v, v + n, cmp);

    for (auto x : v)
      cout << x.first << ' ';
    cout << endl;
  }

  return 0;
}