#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;

bool cmp(int x, int y) {
  if (mp[x] == mp[y]) {
    return x < y;
  }
  return mp[x] > mp[y];
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    mp.clear(); // reset mp

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      mp[arr[i]]++;
    }

    sort(arr, arr + n, cmp);

    for (int x : arr) {
      cout << x << ' ';
    }

    cout << endl;
  }

  return 0;
}