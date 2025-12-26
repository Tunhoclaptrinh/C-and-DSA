#include <bits/stdc++.h>
using namespace std;

bool next(int arr[], int n, int k) {
  int i = k - 1;
  while (i >= 0 && arr[i] == n - k + i + 1) {
    i--;
  }
  if (i == -1) {
    return false;
  } else {
    arr[i]++;
    for (int j = i + 1; j < k; j++) {
      arr[j] = arr[j - 1] + 1;
    }
    return true;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int arr[k];
    set<int> se;
    for (int i = 0; i < k; i++) {
      cin >> arr[i];
      se.insert(arr[i]);
    }

    int res = 0;
    if (next(arr, n, k)) {
      for (int i = 0; i < k; i++) {
        if (se.find(arr[i]) == se.end()) {
          res++;
        }
      }

      cout << res << endl;
    } else {
      cout << k << endl;
    }
  }
  return 0;
}
