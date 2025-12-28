#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  int prefix[n + 1];

  for (int &x : arr)
    cin >> x;
  sort(arr, arr + n);

  int minDistance = INT_MAX;

  for (int i = 1; i < n; i++) {
    minDistance = min(minDistance, arr[i] - arr[i - 1]);
  }

  cout << minDistance;

  return 0;
}