#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int b[n], c[m];
    string arr[n + m];

    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }

    for (int i = 0; i < m; i++) {
      cin >> c[i];
    }

    int idx = 0;
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
      if (b[i] < c[j]) {
        // arr[idx] = "b" + to_string(b[i]);
        arr[idx] = "b" + to_string(i + 1);
        i++;
        idx++;
      } else {
        // arr[idx] = "c" + to_string(c[j]);
        arr[idx] = "c" + to_string(j + 1);
        j++;
        idx++;
      }
    }
    while (i < n) {
      // arr[idx] = "b" + b[i];
      arr[idx] = "b" + to_string(i + 1);
      i++;
      idx++;
    }
    while (j < m) {
      // arr[idx] = "c" + c[j];
      arr[idx] = "c" + to_string(j + 1);
      j++;
      idx++;
    }

    for (int i = 0; i < n + m; i++) {
      cout << arr[i] << ' ';
    }
    cout << endl;
  }

  return 0;
}