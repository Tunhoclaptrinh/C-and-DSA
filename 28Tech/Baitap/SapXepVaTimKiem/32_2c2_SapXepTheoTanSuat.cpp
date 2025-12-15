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
    int arr[n];
    map<int, int> mp;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      mp[arr[i]]++;
    }

    for (pair<int, int> x : mp) {
      v.push_back(x);
    }

    sort(v.begin(), v.end(), cmp);

    for (auto x : v) {
      for (int i = 0; i < x.second; i++) {
        cout << x.first << ' ';
      }
    }

    cout << endl;
  }

  return 0;
}