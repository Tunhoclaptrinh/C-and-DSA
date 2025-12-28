#include <bits/stdc++.h>

using namespace std;

int partitionHoare(int arr[], int l, int r) {
  int pivot = arr[(l + r) / 2];
  int i = l - 1;
  int j = r + 1;

  while (true) {
    do {
      i++;
    } while (arr[i] < pivot);

    do {
      j--;
    } while (arr[j] > pivot);

    if (i >= j) {
      return j;
    }

    swap(arr[i], arr[j]);
  }
}

void quickSort(int arr[], int l, int r) {
  if (l >= r)
    return;
  int p = partitionHoare(arr, l, r);
  quickSort(arr, l, p);
  quickSort(arr, p + 1, r);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int &x : a) {
      cin >> x;
    }
    for (int &x : b) {
      cin >> x;
    }

    quickSort(a, 0, n - 1);
    quickSort(b, 0, m - 1);

    long long tich = a[n - 1] * b[0];

    cout << tich << endl;
  }

  return 0;
}