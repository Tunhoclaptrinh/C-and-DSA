#include <bits/stdc++.h>
using namespace std;

void pt(int n) {
  for (int i = 2; i < sqrt(n) + 1; i++) {
    while (n % i == 0) {
      cout << i << " ";
      n /= i;
    }
  }

  // chỉ chạy đến sqrt có thể sẽ không hết thừa số nguyên tố cuối cùng
  if (n != 1) {
    cout << n;
  }
}

// chỉ in một lần với 1 thừa số nt
void pt2(int n) {
  for (int i = 2; i < sqrt(n) + 1; i++) {
    if (n % i == 0) {
      cout << i << " ";
      while (n % i == 0) {
        n /= i;
      }
    }
  }

  // chỉ chạy đến sqrt có thể sẽ không hết thừa số nguyên tố cuối cùng
  if (n != 1) {
    cout << n;
  }
}

// in ra số mũ
void pt3(int n) {
  for (int i = 2; i < sqrt(n) + 1; i++) {
    if (n % i == 0) {
      int cnt = 0;

      while (n % i == 0) {
        n /= i;
        cnt++;
      }

      cout << i << "^" << cnt << ' ';
    }
  }

  // chỉ chạy đến sqrt có thể sẽ không hết thừa số nguyên tố cuối cùng
  if (n != 1) {
    cout << n << "^1";
  }
}

void pt4(int n) {
  for (int i = 2; i < sqrt(n) + 1; i++) {
    if (n % i == 0) {
      while (n % i == 0) {
        n /= i;
        cout << i;
        if (n != 1) {
          cout << 'x';
        }
      }
    }
  }

  if (n != 1) {
    cout << n;
  }
}

void pt5(int n) {
  for (int i = 2; i < sqrt(n) + 1; i++) {
    if (n % i == 0) {
      int cnt = 0;
      while (n % i == 0) {
        n /= i;
        cnt++;
      }
      cout << i << "^" << cnt;
      if (n != 1)
        cout << "*";
    }
  }
  if (n > 1) {
    cout << n << "^1";
  }
}

int main() {
  int n;
  cin >> n;

  pt(n);
  cout << endl;
  pt2(n);
  cout << endl;
  pt3(n);
  cout << endl;
  pt4(n);
  cout << endl;
  pt5(n);

  return 0;
}

// 84
//
//
// 2 2 3 7
// 2 3 7
// 2^2 3^1 7^1
// 2x2x3x7
// 2^2*3^1*7^1