#include <bits/stdc++.h>

using namespace std;

int partition(int arr[], int l, int r) {
  int pivot = arr[r];
  int i = l - 1;

  for (int j = l; j < r; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }

  i++;
  swap(arr[i], arr[r]);

  return i;
}

void quickSort(int arr[], int l, int r) {
  if (l >= r)
    return;

  int p = partition(arr, l, r);

  quickSort(arr, l, p - 1);
  quickSort(arr, p + 1, r);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
      cin >> a[i];

    for (int i = 0; i < m; i++)
      cin >> b[i];

    quickSort(a, 0, n - 1);
    quickSort(b, 0, m - 1);

    int cnt = 0;
    int i = 0;
    int j = 0;

    while (i < n && j < m) {
      if (a[i] > b[j]) {
        cnt++; // ghép được 1 cặp
        i++;
        j++;
      } else {
        i++; // nam này thấp quá, bỏ qua
      }
    }

    cout << cnt << endl;
  }

  return 0;
}