#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;

long long pow1(long long n, long long k) {
  if (k == 0)
    return 1;
  if (k == 1)
    return n % MOD;

  long long half = pow1(n, k / 2);
  half = (half * half) % MOD;

  if (k % 2 == 0) {
    return half;
  } else {
    return (n % MOD * half) % MOD;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, k;
    cin >> n >> k;
    cout << pow1(n, k) << endl;
  }
  return 0;
}