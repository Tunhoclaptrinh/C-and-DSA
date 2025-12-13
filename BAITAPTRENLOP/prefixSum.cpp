#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, u, v;
    cin >> n >> u >> v;

    int arr[n];
    int prefixSum[n + 1];

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    prefixSum[0] = 0;
    for (int i = 1; i <= n; i++) {
      prefixSum[i] = prefixSum[i - 1] + arr[i - 1];
    }

    int maxSum = INT_MIN;

    for (int i = u; i <= v; i++) {
      for (int j = 0; j <= n - i; j++) {
        maxSum = max(maxSum, prefixSum[i + j] - prefixSum[j]);
      }
    }

    cout << maxSum << endl;
  }

  return 0;
}
