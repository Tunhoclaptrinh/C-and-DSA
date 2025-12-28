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

    int time = 0;
    for (int i = 0; i < n - 1; i++) {
      if (!(v[i].first + v[i].second <= v[i + 1].first)) {
        v[i + 1].first = v[i].first + v[i].second;
      }
    }

    time = v[n - 1].first;
    time += v[n - 1].second;

    cout << time;

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