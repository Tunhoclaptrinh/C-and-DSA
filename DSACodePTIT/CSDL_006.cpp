#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  int arr[n];
  map<int, int> mp;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    mp[arr[i]]++;
  }

  for (int i = 0; i < n; i++) {
    if (mp[arr[i]] > 0) {
      cout << arr[i] << ' ';
      mp[arr[i]] = 0;
    }
  }

  return 0;
}