#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, X;
    cin >> n >> X;
    int arr[n];
    map<int, int> mp;
    for (int &x : arr) {
      cin >> x;
      mp[x]++;
    }

    if (mp[X] != 0) {
      cout << mp[X] << endl;
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}