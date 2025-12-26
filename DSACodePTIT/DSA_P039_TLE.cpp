#include <bits/stdc++.h>
using namespace std;

long long arr[21][21];

long long sum(int res[], int n) {
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    ans += arr[i][res[i]];
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> arr[i][j];
      }
    }

    int res[n];
    for (int i = 0; i < n; i++) {
      res[i] = i;
    }

    long long ans = LLONG_MIN;
    do {
      ans = max(ans, sum(res, n));
    } while (next_permutation(res, res + n));

    cout << ans << endl;
  }

  return 0;
}