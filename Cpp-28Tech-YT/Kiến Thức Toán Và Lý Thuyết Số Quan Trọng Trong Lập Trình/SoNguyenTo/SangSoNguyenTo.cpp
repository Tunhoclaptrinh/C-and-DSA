#include <bits/stdc++.h>
using namespace std;

// O(nlogn)
bool isPrime(int n) {
  if (n < 2)
    return false;
  for (int i = 0; i < sqrt(n) + 1; i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n + 1; i++) {
    if (isPrime(i)) {
      cout << i << ' ';
    }
  }
}