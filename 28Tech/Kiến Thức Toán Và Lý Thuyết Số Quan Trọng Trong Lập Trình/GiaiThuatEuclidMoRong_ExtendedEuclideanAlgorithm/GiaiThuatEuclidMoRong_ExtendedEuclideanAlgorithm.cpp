#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }

  return gcd(b, a % b);
}

int gcd2(int a, int b) {
  while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int x, y, d;
void extended(int a, int b) {
  if (b == 0) {
    x = 1;
    y = 0;
    d = a; // Ước chung lớn nhất
  } else {
    extended(b, a % b); // sau khi gọi đệ quy xong thì tính tiếp x,y
    int tmp = x;
    x = y;
    y = tmp - a / b * y;
  }
}

// Euclid mở rộng = Euclid thường + truy ngược để tìm x, y

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
  }

  return 0;
}