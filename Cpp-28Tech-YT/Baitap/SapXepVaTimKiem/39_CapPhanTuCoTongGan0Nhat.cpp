#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int res = INT_MAX;

    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        if (abs(res) > abs(arr[i] + arr[j])) {
          res = arr[i] + arr[j];
        }
      }
    }

    cout << res << endl;
  }

  return 0;
}