#include <bits/stdc++.h>
using namespace std;

int cnt[5];

// tìm vị trí xuất hiện đầu tiên của phần từ > x nằm trong đoạn [l,r] của mảng a
int first_pos(int a[], int l, int r, int x) {
  int res = -1;
  while (l <= r) {
    int m = (l + r) / 2;
    if (a[m] > x) {
      res = m;

      r = m - 1;
    }

    else
      l = m + 1;
  }

  return res;
}

// Đếm xem có bao nhiêu phần từ thuộc mảng y, mà
int count(int y[], int m, int x) {
  if (x == 0) {
    return 0;
  }
  if (x == 1) {
    return cnt[0];
  }

  ll res = cnt[0] + cnt[1];
  // auto it = upper_bound(y, y+m, x);
  // res += y + n - it;
  // hoặc
  int l = first_pos(y, 0, m - 1, x);
  if (l != -1) {
    res += m - l;
  }

  if (x == 2) {
    res -= (cnt[4] + cnt[3]);
  }
  if (x == 3) {
    res += cont[2];
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < m; i++) {
      cin >> b[i];
      if (b[i] <= 4) {
        cnt[b[i]]++;
      }
    }

    sort(b, b + m);
    ll ans = 0;
    for (int x : a) {
      ans += count(b, m, x);
    }

    cout << ans << endl;
    memset(cnt, 0, sizeof(cnt)); // reset cnt[]
  }
}
