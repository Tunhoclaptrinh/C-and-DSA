#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    // init
    for (int i = n; i >= 0; i--) {
      arr[i] = n - i;
    }

    do {
      for (int i = 0; i < n; i++) {
        cout << arr[i];
      }
      cout << ' ';
    } while (prev_permutation(arr, arr + n));
    cout << endl;
  }

  return 0;
}