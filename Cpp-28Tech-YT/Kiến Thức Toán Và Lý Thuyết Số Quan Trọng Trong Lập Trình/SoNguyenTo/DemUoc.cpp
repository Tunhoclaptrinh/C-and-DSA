#include <bits/stdc++.h>
using namespace std;

// Đếm số lượng ước số của 1 số
int count(int n) {
  int cnt = 0;
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      cnt++;
    }
  }

  return cnt + 1;
}

// tối ưu hơn
int countU(int n) {
  int cnt = 0;
  for (int i = 1; i * i < n; i++) {
    if (n % i == 0) {
      // xử lý nếu là số chính phương thì chỉ coonjg 1 lần thôi
      if (i != n / i) {
        cnt += 2;
      } else
        cnt++;
    }
  }

  return cnt;
}

int count3(int n) {
  int res = 1;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      int cnt = 0;
      while (n % i == 0) {
        cnt++;
        n /= i;
      }

      res *= (cnt + 1);
    }
  }

  if (n != 1) {
    res *= 2;
  }

  return res;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    cout << count(n) << endl;
    cout << countU(n) << endl;
    cout << count3(n) << endl;
  }

  return 0;
}

// 2
//
// 10
//
// 28

//=> 4
//=> 6