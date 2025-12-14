#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int &x : arr)
      cin >> x;

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        if (arr[i] + arr[j] == k) {
          ans++;
        }
      }
    }

    cout << ans;
  }

  return 0;
}