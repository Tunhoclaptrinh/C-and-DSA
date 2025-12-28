#include <bits/stdc++.h>

using namespace std;
using ll = long long;

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

    vector<ll> x_y, y_x;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        x_y.push_back(pow(a[i], b[j]));
        y_x.push_back(pow(b[j], a[i]));
      }
    }

    int cnt = 0;
    for (int i = 0; i < x_y.size(); i++) {
      if (x_y[i] > y_x[i]) {
        cnt++;
      }
    }

    // for (int i = 0; i < n; i++) {
    //   cout << arr[i] << ' ';
    // }

    cout << cnt;
    cout << endl;
  }

  return 0;
}

// 1
//
// 3 2
//
// 2 1 6
//
// 1 5
//
//  => 3