#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];

    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        if (abs(ans) > abs(arr[i] + arr[j])) {
          ans = arr[i] + arr[j];
        }
      }
    }

    cout << ans << endl;
  }

  return 0;
}