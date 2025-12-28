#include <bits/stdc++.h>
using namespace std;

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

    pair<int, int> maxFreq;
    for (auto it : mp) {
      if (it.second >= maxFreq.second) {
        if (it.second == maxFreq.second && it.first < maxFreq.first) {
          maxFreq = it;
        } else if (it.second > maxFreq.second) {
          maxFreq = it;
        }
      }
    }

    cout << maxFreq.first << " " << maxFreq.second << endl;
  }

  return 0;
}