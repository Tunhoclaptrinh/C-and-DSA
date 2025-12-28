#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {

    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    int ans = -1;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      mp[arr[i]]++;
      if (mp[arr[i]] == 2) {
        ans = arr[i];
        break;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
//
//
// 2
//
// 5
//
// 1 2 3 4 5
//
//
// 6
//
// 1 2 3 3 2 5 7
//
//
// => -1
// => 3