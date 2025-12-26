#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, q;
  cin >> n >> q;

  long long arr[n];
  long long prefixSum[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  prefixSum[0] = arr[0];
  for (int i = 1; i < n; i++) {
    prefixSum[i] = prefixSum[i - 1] + arr[i];
  }

  while (q--) {
    int l, r;
    cin >> l >> r;

    long long mx = 0; // 🔥 SỬA 1: cho phép dãy con rỗng

    for (int i = l - 1; i < r; i++) {
      for (int j = i; j < r; j++) {
        long long sum = prefixSum[j] - (i > 0 ? prefixSum[i - 1] : 0);
        mx = max(mx, sum);
      }
    }

    cout << mx << endl;
  }
}
