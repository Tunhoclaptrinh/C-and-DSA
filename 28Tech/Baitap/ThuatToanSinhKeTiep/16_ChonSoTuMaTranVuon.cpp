#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int c[n + 1];
  int arr[n + 1][n + 1];
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 1; i <= n; i++) {
    c[i] = i;
  }

  vector<vector<int>> v;
  do {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
      sum += arr[i][c[i]];
    }
    if (sum == k) {
      vector<int> tmp(c + 1, c + n + 1);
      v.push_back(tmp);
    }
  } while (next_permutation(c + 1, c + n + 1));
  cout << v.size() << endl;
  for (vector<int> it : v) {
    for (int x : it) {
      cout << x << ' ';
    }
    cout << endl;
  }

  return 0;
}