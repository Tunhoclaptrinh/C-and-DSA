#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    int arr[n];

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      mp[arr[i]]++;
    }

    int minx = *min_element(arr, arr + n);
    int maxx = *max_element(arr, arr + n);

    int count = 0;
    for (int i = minx; i <= maxx; i++) {
      if (mp[i] == 0) {
        count++;
      }
    }

    cout << count << endl;
  }

  return 0;
}
