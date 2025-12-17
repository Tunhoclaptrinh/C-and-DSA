#include <bits/stdc++.h>
using namespace std;

// Tìm ước chung lớn nhất của a, b
long long gcd(long long a, long long b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, m;
    cin >> n >> m;

    if (gcd(n, m) == 1) {
      cout << "YES";
    } else {
      cout << "NO";
    }

    // cout << gcd(n, m);
  }

  return 0;
}

// 1
//
// 20 17
// => YES