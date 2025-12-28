#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int &x : arr)
    cin >> x;

  sort(arr, arr + n, greater<int>());

  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] > i) {
      ans += arr[i] - i;
    } else {
      break;
    }
  }

  cout << ans;

  return 0;
}