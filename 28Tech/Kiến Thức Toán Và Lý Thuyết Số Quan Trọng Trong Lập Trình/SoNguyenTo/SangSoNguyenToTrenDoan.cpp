#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10000000;
int prime[MAXN + 1];

void sieve() {
  prime[0] = 0;
  prime[1] = 0;
  for (int i = 2; i <= MAXN; i++) {
    prime[i] = 1;
  }

  for (int i = 2; i * i <= MAXN; i++) {
    if (prime[i]) {
      for (int j = i * i; j <= MAXN; j += i) {
        prime[j] = 0;
      }
    }
  }
}

// in ra các số nguyên tố trong đoạn từ [a,b]
int main() {
  sieve();
  int n, m;
  cin >> n >> m;

  for (int i = n; i <= m; i++) {
    if (prime[i]) {
      cout << i << ' ';
    }
  }

  return 0;
}