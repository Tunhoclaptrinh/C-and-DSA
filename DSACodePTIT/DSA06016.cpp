#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int &x : a)
      cin >> x;

    for (int &x : b)
      cin >> x;

    sort(a, a + n, greater<int>());
    sort(b, b + m);

    cout << (long long)a[0] * b[0];

    cout << endl;
  }

  return 0;
}