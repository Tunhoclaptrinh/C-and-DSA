#include <bits/stdc++.h>
using namespace std;

// tính tổng các ước của n
int sumDivison(int n) {
  int sum = 0;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      if (i != n / i) {
        sum += i + n / i;
      } else {
        sum += i;
      }
    }
  }

  return sum;
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    cout << sumDivison(n) << endl;
  }

  return 0;
}