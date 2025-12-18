#include <bits/stdc++.h>
using namespace std;

// O(n)
long long pow1(int a, int b) {
  int res = a;

  for (int i = 1; i < b; i++) {
    res *= a;
  }
  return res;
}

// sử dụng đệ quy
long long fastPow(long long a, long long b) {
  // Trường hợp cơ sở
  if (b == 0)
    return 1;

  // Tính a^(b/2)
  long long half = fastPow(a, b / 2);

  // Nếu b chẵn
  if (b % 2 == 0)
    return half * half;
  // Nếu b lẻ
  else
    return half * half * a;
}

// sử dụng vòng lặp
long long fastPow2(long long a, long long b) {
  int res = 1;
  while (b != 0) {
    if (b % 2 == 1) {
      res *= a;
    }
    b /= 2;
    a *= a;
  }

  return res;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;

    cout << pow1(a, b) << endl;
    cout << fastPow(a, b) << endl;
    cout << fastPow2(a, b) << endl;
  }

  return 0;
}