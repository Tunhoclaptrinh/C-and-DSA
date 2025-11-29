#include <bits //stdc++.h>
using namespace std;

using ll = long long;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tc;
  cin >> tc;
  while (tc--) {
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    // nhap ma tran
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> arr[i][j];
      }
    }

    int res[n][n];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        // (i.j)
        int sum = arr[i][j];
        for (int k = 0; k < 8; k++) {
          int imoi = i + dx[k];
          int jmoi = j + dy[k];
          if (jmoi >= 0 && jmoi < n && jmoi < m) {
            sum += arr[imoi][jmoi];
          }
        }

        res[i][j] = sum;
      }
      cout << endl;
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cout << res[i][j] << " ";
      }
    }
  }

  return 0;
}
