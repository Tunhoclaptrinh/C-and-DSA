#include <bits/stdc++.h>

using namespace std;

int merge(int arr[], int l, int m, int r) {
  vector<int> L(arr + l, arr + m + 1);
  vector<int> R(arr + m + 1, arr + r + 1);
  int cnt = 0;

  int i = 0, j = 0, k = l;
  while (i < L.size() && j < R.size()) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
      k++;
    } else {
      cnt += L.size() - i; // tất cả phần tử còn lại của L đều > R[j]
      arr[k] = R[j];
      k++;
      j++;
    }
  }

  while (i < L.size()) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < R.size()) {
    arr[k] = R[j];
    j++;
    k++;
  }

  return cnt;
}

int mergesort(int arr[], int l, int r) {
  int dem = 0;
  if (l < r) { // điều kiện dừng
    int mid = (l + r) / 2;
    dem += mergesort(arr, l, mid);
    dem += mergesort(arr, mid + 1, r);
    dem += merge(arr, l, mid, r);
  }

  return dem;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    int tmp = 0;
    // đếm thử với code trâu
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (arr[i] > arr[j]) {
          tmp++;
        }
      }
    }

    int ans = mergesort(arr, 0, n - 1);

    cout << "ans" << ans << endl;

    cout << "tmp" << tmp << endl;

    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
  }

  return 0;
}