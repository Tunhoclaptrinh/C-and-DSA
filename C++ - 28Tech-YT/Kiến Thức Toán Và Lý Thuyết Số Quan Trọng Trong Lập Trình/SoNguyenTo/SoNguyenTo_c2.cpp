#include <bits/stdc++.h>
using namespace std;

int prime(int n) {
  int cnt = 0;
  for (int i = 1; i <= n / 2; i++) {
    if (n % i == 0)
      cnt++;
  }

  if (cnt == 1) {
    return 1;
  } else
    return 0;
}

int main() {
  int n;
  cin >> n;
  if (prime(n))
    cout << "YES";
  else
    cout << "NO";
}