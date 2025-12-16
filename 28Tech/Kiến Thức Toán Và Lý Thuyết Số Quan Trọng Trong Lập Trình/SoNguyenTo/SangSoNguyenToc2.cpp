#include <bits/stdc++.h>
using namespace std;

// Nếu muốn sàng các số nguyên tố không vượt quá n,
// Phải tạo được 1 mảng có kích thước l n + 1 (n là phạm vi bài toán)
const int MAXN = 1000000;
int prime[MAXN + 1];

// O(nloglogn)
void sieve() {
  // Coi tất cả các số từ 0 - n là số nguyên tố
  for (int i = 0; i <= MAXN; i++) {
    prime[i] = 1;
  }

  // loại 0 và 1;
  prime[0] = prime[1] = 0;

  for (int i = 2; i * i <= MAXN; i++) {
    // Nếu i là số nguyên tố
    if (prime[i]) {
      // Duyệt tất cả các bội ố của i và cho nó không là số nguyên tố
      for (int j = i * i; j <= MAXN; j += i) {
        prime[j] = 0;
      }
    }
  }
}

int main() {
  sieve();
  int n;
  cin >> n;

  for (int i = 0; i <= n; i++) {
    if (prime[i]) {
      cout << i << ' ';
    }
  }

  return 0;
}