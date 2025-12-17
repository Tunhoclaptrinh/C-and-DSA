#include <bits/stdc++.h>
using namespace std;

// Tìm ước chung lớn nhất của a, b
long long gcd(long long a, long long b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

// cách thông thường để tìm các số nguyên tố cùng nhau
long long count(long long n) {
  long long res = 0;
  for (long long i = 1; i <= n; i++) {
    if (gcd(n, i) == 1) {
      res++;
    }
  }
  return res;
}

// cách dùng với Phi hàm Euler:
// https://youtu.be/0s545mDND18?si=4rXpOTmyZDNPzFsz&t=510
long long phi(long long n) {
  long long res = n;
  for (long long i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      while (n % i == 0) {
        n /= i;
      }
      // res = res * (1 - 1 / i); => như này thaành số thực là sai mất
      // => biến đổi công thức 1 tí
      res = res - res / i;
    }
  }

  return res;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n;
    cin >> n;

    cout << count(n) << endl;
    cout << phi(n) << endl;
  }

  return 0;
}