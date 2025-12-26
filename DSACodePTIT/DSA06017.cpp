#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int n, int b[], int m) {
  int i = 0, j = 0, idx = 0;
  int arr[n + m];

  while (i < n && j < m) {
    if (a[i] < b[j]) {
      arr[idx++] = a[i++];
    } else {
      arr[idx++] = b[j++];
    }
  }

  while (i < n) {
    arr[idx++] = a[i++];
  }

  while (j < m) {
    arr[idx++] = b[j++];
  }

  sort(arr, arr + n + m);

  for (int k = 0; k < n + m; k++) {
    cout << arr[k] << ' ';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int &x : a)
      cin >> x;
    for (int &x : b)
      cin >> x;

    merge(a, n, b, m);

    cout << endl;
  }

  return 0;
}
