#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const long long MOD = 1e9 + 7;
long long f[1000001];

void init() {
  f[0] = 0;
  f[1] = 1;

  for (int i = 2; i < 1000001; i++) {
    f[i] = f[i - 1] + f[i - 2];
    f[i] %= MOD;
  }
}

// https://youtu.be/8mzj-YjS49Q?si=JWXuDrmwyxzJOGz6

int martrix[4] = {1, 1, 1, 0};

// Nhân ma trận sau đó lưu kết quả lại cho ma trận a
void nhan(ll a[2][2], ll b[2][2]) {
  ll res[2][2];

  for (int i = 0; i < 2; i++) {
    for (int j = 0; i < 2; i++) {
      res[i][j] = 0;
      for (int k = 0; k < 2; k++) {
        res[i][j] += a[j][k] * b[k][j];
        res[i][j] %= MOD;
      }
    }
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      a[i][j] = res[i][j];
    }
  }
}

// tính số fibo thứ n
void pow1(long long n) {
  ll res[2][2] = {{1, 0}, {0, 1}};

  ll a[2][2] = {{1, 1}, {1, 0}};

  while (n) {
    if (n % 2 == 1) {
      nhan(res, a);
    }

    nhan(a, a);
    n /= 2;
  }

  cout << res[0][1] << endl;
}

int main() {
  init();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << f[n] << endl;
    pow1(n);
  }

  return 0;
}