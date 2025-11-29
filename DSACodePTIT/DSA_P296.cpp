#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, q;
  cin >> n >> q;
  int arr[n];
  int prefixSum[n];
  memset(prefixSum, 0, sizeof(prefixSum));

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  prefixSum[0] = arr[0];
  for (int i = 1; i < n; i++) {
    prefixSum[i] = prefixSum[i - 1] + arr[i];
  }

  for (int i = 0; i < n; i++) {
    cout << prefixSum[i] << " ";
  }
  while (q--) {
    int l, r;
    cin >> l >> r;

    int mx = INT_MIN;
    for (int i = l - 1; i < r; i++) {
      for (int j = i + 1; j < r; j++) {
        int sum = prefixSum[j] - (i >= 0 ? prefixSum[i] : 0);
        mx = max(mx, sum);
      }
    }

    cout << mx << endl;
  }
}