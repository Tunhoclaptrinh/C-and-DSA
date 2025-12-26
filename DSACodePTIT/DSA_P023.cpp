#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  if (n < 2)
    return false;
  if (n == 2)
    return true;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

void init(vector<int> &a, int n) {
  for (int i = 0; i < n; i++) {
    a[i] = i + 1;
  }
}

bool next(vector<int> &a, int n, int k) {
  int i = k - 1;
  while (i >= 0 && a[i] >= n - k + i + 1) {
    i--;
  }
  if (i == -1) {
    return false;
  } else {
    a[i]++;
    for (int j = i + 1; j <= k; j++) {
      a[j] = a[j - 1] + 1;
    }
    return true;
  }
}

int main() {

  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  init(a, n);

  int count = 1;
  while (next(a, n, k)) {
    count++;
    if (isPrime(count)) {
      cout << count << ": ";
      for (int i = 0; i < k; i++) {
        cout << a[i] << ' ';
      }
      cout << endl;
    }
  }

  return 0;
}