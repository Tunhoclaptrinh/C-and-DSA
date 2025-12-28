#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int &x : a) {
      cin >> x;
    }
    for (int &x : b) {
      cin >> x;
    }

    int maxA = *max_element(a, a + n);

    int minB = *min_element(b, b + n);

    long long tich = maxA * minB;

    cout << tich << endl;
  }

  return 0;
}