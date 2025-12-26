#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int arr[n + 1];
  int matrix[n + 1][n + 1];
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> matrix[i][j];
    }
  }

  vector<vector<int>> v;

  // init
  for (int i = 1; i <= n; i++) {
    arr[i] = i;
  }
  do {
    int res = 0;
    for (int i = 1; i <= n; i++) {
      res += matrix[i][arr[i]];
    }
    if (res == k) {
      vector<int> tmp(arr + 1, arr + n + 1);
      v.push_back(tmp);
    }
  } while (next_permutation(arr + 1, arr + n + 1));

  cout << v.size() << endl;
  for (vector<int> it : v) {
    for (int x : it) {
      cout << x << ' ';
    }
    cout << endl;
  }

  return 0;
}