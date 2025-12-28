#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
      mp[a[i]]++;
    }

    cout << mp.size() << endl;
  }

  return 0;
}