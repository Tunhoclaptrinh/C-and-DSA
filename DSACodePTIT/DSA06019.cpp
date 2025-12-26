#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y) {
  if (x.second == y.second) {
    return x.first < y.first;
  }
  return x.second > y.second;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      mp[x]++;
    }

    vector<pair<int, int>> v;
    for (auto it : mp) {
      v.push_back(it);
    }

    sort(v.begin(), v.end(), cmp);

    for (auto it : v) {
      while (it.second--) {
        cout << it.first << ' ';
      }
    }

    cout << endl;
  }

  return 0;
}