#include <bits/stdc++.h>
using namespace std;

int count(int n) {
  if (n < 10) {
    return 1;
  }

  return 1 + count(n / 10);
}

// kiểm tra mảng có đối xứng hay không ( 1 2 3 2 1)
int palin(int a[], int l, int r) {
  if (l >= r)
    return 1; // tức là bạn đã xét tất cả các cặp đối xứng trong mảng rồi thì
              // trả về true
  if (a[l] != a[r]) {
    return 0;
  }

  return palin(a, l + 1, r - 1);
}

int main() {
  int n;
  cin >> n;

  cout << count(n) << endl;

  return 0;
}