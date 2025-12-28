#include <bits/stdc++.h>
using namespace std;

const long long MAXN = 100000000000;
long long prime[MAXN + 1];

void sieve() {
  prime[0] = 0;
  prime[1] = 0;
  for (long long i = 2; i <= MAXN; i++) {
    prime[i] = 1;
  }

  for (long long i = 2; i * i <= MAXN; i++) {
    if (prime[i]) {
      for (long long j = i * i; j <= MAXN; j += i) {
        prime[j] = 0;
      }
    }
  }
}

// in ra các số nguyên tố trong đoạn từ [a,b]
int main() {
  sieve();
  long long n, m;
  cin >> n >> m;

  for (long long i = n; i <= m; i++) {
    if (prime[i]) {
      cout << i << ' ';
    }
  }

  return 0;
}