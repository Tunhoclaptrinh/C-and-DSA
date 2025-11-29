#include <bits/stdc++.h>
using namespace std;

int cnt[10000001];

int main() {
  int arr[10000], n;
  cin >> n;
  int m = INT_MIN;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    cnt[arr[i]]++;
    m = max(m, arr[i]);
  }

  for (int i = 1; i < m; i++) {
    if (cnt[i] != 0) {
      for (int j = 0; j < cnt[i]; j++) {
        cout << i << " ";
      }
    }
  }

  return 0;
}