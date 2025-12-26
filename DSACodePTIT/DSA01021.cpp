#include <bits/stdc++.h>
using namespace std;
int ok;

void next(int arr[], int n, int k) {
  int i = k - 1;
  while (i >= 0 && arr[i] == n - k + i + 1) {
    i--;
  }

  if (i == -1) {
    ok = 0;
  } else {
    arr[i]++;
    for (int j = i + 1; j < k; j++) {
      arr[j] = arr[j - 1] + 1;
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    ok = 1;
    int n, k;
    cin >> n >> k;
    int arr[k];
    map<int, int> mp;

    for (int i = 0; i < k; i++) {
      cin >> arr[i];
      mp[arr[i]]++;
    }
    next(arr, n, k);
    int ans = 0;
    for (int i = 0; i < k; i++) {
      if (mp[arr[i]] == 0) {
        ans++;
      }
    }

    if (ans == 0) {
      cout << k << endl;
    } else {
      cout << ans << endl;
    }
  }

  return 0;
}