#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll giaiThua(int n) {
  if (n == 1)
    return 1;

  return n * giaiThua(n - 1);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  cout << giaiThua(n) << endl;

  return 0;
}
