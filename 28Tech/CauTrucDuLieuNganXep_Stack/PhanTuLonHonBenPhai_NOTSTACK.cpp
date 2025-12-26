#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  vector<int> v;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[j] > arr[i]) {
        v.push_back(arr[j]);
        break;
      } else if (j == n - 1) {
        v.push_back(-1);
      }
    }
  }
  v.push_back(-1);

  for (int x : v) {
    cout << x << ' ';
  }

  return 0;
}