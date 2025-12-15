#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y) { return x.first < y.first; }

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
      cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), cmp);

    int end_time = v[0].first + v[0].second;
    for (int i = 1; i < n; i++) {
      end_time = max(end_time, v[i].first) + v[i].second;
      if (v[i].first < end_time) {
        v[i].first = end_time;
      }
    }

    cout << end_time;

    cout << endl;
  }

  return 0;
}

// 1
//
// 3
//
// 2 1
//
// 8 3
//
// 5 7
//
//
// => 15