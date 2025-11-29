
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  int arr[n][m];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];

  int res = INT_MIN;
  int tmp[n]; // Luu tong cac phan tu tren cac dong, tmp[i] : tong cac phan tu
              // tren dong thu i

  for (int l = 0; l < m; l++) {
    ms(tmp, 0);
    for (r = l; r < n; r++) {
      for (int i = 0; i < n; i++) {
        tmp[i] += arr[i][r];
      }

      res = max(res, kadame(tmp, n));
    }
  }

  cout << res << "\n";
  return 0;
}
