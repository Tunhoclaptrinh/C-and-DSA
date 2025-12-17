#include <bits/stdc++.h>
using namespace std;

long long gcdNgoo(long long a, long long b) {
  long long res = min(a, b);

  for (long long i = res; i >= 1; i--) {
    if (a % i == 0 & b % i == 0) {
      res = i;
      break;
    }
  }

  return res;
}
// cái này tối ưu này
long long gcd(long long a, long long b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

// cách naày cũng tối ưu
long long gcd4(long long a, long long b) {
  while (b != 0) {
    long long r = a % b;
    a = b;
    b = r;
  }
  return a;
}

long long gcd2(long long a, long long b) {
  if (a == 0 || b == 0) {
    return a + b;
  }

  if (a < b) {
    swap(a, b);
  }

  while (a != b) {
    int tmp = a;
    a = b;
    b = tmp - b;
  }

  return b;
}

long long gcd3(long long a, long long b) {
  if (a == 0 || b == 0) {
    return a + b;
  }

  while (a != b) {
    if (a > b)
      a = a - b;
    else
      b = b - a;
  }

  return b;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;

    cout << gcdNgoo(a, b) << endl;
    cout << gcd(a, b) << endl;
    cout << gcd2(a, b) << endl;
  }

  return 0;
}

// 2
// 100 20
// 17 29
//
// => 20
// => 1
