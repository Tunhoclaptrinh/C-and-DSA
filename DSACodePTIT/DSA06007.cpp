#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    int sorted[n];

    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      sorted[i] = arr[i];
    }

    sort(sorted, sorted + n);

    for (int i = 0; i < n; i++) {
      if (arr[i] != sorted[i]) {
        cout << i + 1 << ' ';
        break;
      }
    }

    for (int i = n - 1; i >= 0; i--) {
      if (arr[i] != sorted[i]) {
        cout << i + 1;
        break;
      }
    }

    cout << endl;
  }

  return 0;
}