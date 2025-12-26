#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[m];
    map<int, int> mp;
    map<int, int> mp1;
    map<int, int> mp2;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      mp[a[i]]++;
      mp1[a[i]]++;
    }

    for (int i = 0; i < m; i++) {
      cin >> b[i];
      mp[b[i]]++;
      mp2[b[i]]++;
    }

    for (auto it : mp) {
      cout << it.first << ' ';
    }
    cout << endl;

    for (auto it : mp) {
      if (mp1[it.first] != 0 && mp2[it.first] != 0) {
        cout << it.first << ' ';
      }
    }
    cout << endl;
  }

  return 0;
}