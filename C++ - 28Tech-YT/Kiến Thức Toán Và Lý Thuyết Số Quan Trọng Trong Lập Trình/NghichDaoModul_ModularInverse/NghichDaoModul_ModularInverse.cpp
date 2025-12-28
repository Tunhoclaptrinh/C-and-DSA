#include <bits/stdc++.h>
using namespace std;

int x, y, d;

void extended(int a, int b) {
  if (b == 0) {
    x = 1;
    y = 0;
    d = a;
  } else {
    extended(b, a % b);
    int tmp = x;
    x = y;
    y = tmp - a / b * y;
  }
}

void modularInverse(int a, int m) {
  extended(a, m);
  if (d != 1) {
    cout << "Khong ton tai !";
  } else {
    // cout << x << endl;
    cout << (x % m + m) % m << endl; // đây là để lấy x dương
  }
}

long long powMod(long long a, long long b, long long m) {
  long long res = a;
  a %= m;
  while (b) {
    if (b % 2 == 1) {
      res *= a;
      res %= m;
    }
    a *= a;
    b /= 2;
    a %= m;
  }

  return res;
}

// m là số nguyên tố
void modularInverse2(int a, int m) { cout << powMod(a, m - 2, m) << endl; }

int main() {
  modularInverse(5, 9);

  return 0;
}