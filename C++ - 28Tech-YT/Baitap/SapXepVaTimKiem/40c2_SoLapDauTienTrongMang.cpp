#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    static bool danhDau[1000001];
    memset(danhDau, false, sizeof(danhDau));

    int ans = -1;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;

      if (danhDau[x]) {
        ans = x;
        // đọc nốt input
        for (int j = i + 1; j < n; j++) {
          cin >> x;
        }
        break;
      }
      danhDau[x] = true;
    }

    cout << ans << endl;
  }
  return 0;
}
