#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;

// Tính số dư của tích các phần từ trong mảng với 10^9 + 7
// 10
// 20 1000 30 40 1 2 3 4 5 6 => test case nhỏ => không sai
// hoặc : 1 -> 10^9 => tràn
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    long long res = 1;
    for (int i = 0; i < n; i++) {
      res *= a[i];
      res %= MOD;
    }

    cout << res << endl;
  }

  return 0;
}