#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  int arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  int ans = INT_MIN; // đổi tên vì "max" trùng tên hàm

  for (int i = 0; i < m; i++) {
    int tmpArr[n][m - i];

    // prefix sum theo chiều dọc
    for (int k = 0; k < n; k++) {
      for (int j = i; j < m; j++) {
        if (k == 0) {
          tmpArr[k][j - i] = arr[k][j];
        } else {
          tmpArr[k][j - i] = tmpArr[k - 1][j - i] + arr[k][j];
        }
      }
    }

    // prefix sum theo chiều ngang
    for (int k = 0; k < n; k++) {
      for (int j = i; j < m; j++) {
        if (j == i) {
          // cột đầu tiên (đã là tổng theo cột rồi)
          tmpArr[k][j - i] = tmpArr[k][j - i];
        } else {
          tmpArr[k][j - i] = tmpArr[k][j - i] + tmpArr[k][j - i - 1];
        }
      }
    }

    // cập nhật ans và in ra
    for (int k = 0; k < n; k++) {
      for (int j = i; j < m; j++) {
        ans = max(ans, tmpArr[k][j - i]);
        cout << tmpArr[k][j - i] << " ";
      }
      cout << endl;
    }
  }

  cout << ans << endl;

  return 0;
}
