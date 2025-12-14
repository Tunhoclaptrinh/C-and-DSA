#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int arr[3];
    memset(arr, 0, sizeof(arr));
    // hoặc
    // int arr[3] = {0};
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      arr[x]++;
    }

    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < arr[i]; j++) {
        cout << i << ' ';
      }
      // or
      // while (arr[i]--) {
      //   cout << i << ' ';
      // }
    }
  }

  return 0;
}