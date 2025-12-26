#include <bits/stdc++.h>
using namespace std;

void init(int arr[], int k) {
  for (int i = 0; i < k; i++) {
    arr[i] = i + 1;
  }
}

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
  int n, k;
  cin >> n >> k;

  string arr[n];
  set<string> se;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    se.insert(arr[i]);
  }
  int res[k];

  vector<string> v(se.begin(), se.end()); // chuyển sang vector

  init(res, k);

  do {
    for (int i = 0; i < k; i++) {
      cout << v[res[i] - 1] << ' '; // -1 vì res bắt đầu từ 1
    }
    cout << endl;
  } while (next(res, se.size(), k));

  return 0;
}