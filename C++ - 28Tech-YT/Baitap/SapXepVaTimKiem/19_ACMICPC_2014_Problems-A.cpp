#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  int caseT = 1;

  while (t--) {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int &x : arr)
      cin >> x;

    sort(arr, arr + n);

    int ans = 1;
    for (int i = 0; i < n - 1; i++) {
      if (arr[i + 1] - arr[i] > k) {
        ans++;
      }
    }

    cout << "Case #" << caseT++ << ": " << ans << endl;
  }

  return 0;
}

// 4
//
// 7 1
//
// 2 6 1 7 3 4 9
//
// 7 2
//
// 2 6 1 7 3 4 9
//
// 5 5
//
// 15 1 20 4 17
//
// 8 10
//
// 100 200 300 400 500 600 700 800