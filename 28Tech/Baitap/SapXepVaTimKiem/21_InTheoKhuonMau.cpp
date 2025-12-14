#include <bits/stdc++.h>
using namespace std;

int partitionLomuto(int arr[], int l, int r) {
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

void quickSortLomuto(int arr[], int l, int r) {
  if (l >= r) {
    return;
  }

  int p = partitionLomuto(arr, l, r);
  quickSortLomuto(arr, l, p - 1);
  quickSortLomuto(arr, p + 1, r);
}

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

void quickSortHoare(int arr[], int l, int r) {
  if (l >= r) {
    return;
  }

  int p = partitionHoare(arr, l, r);
  quickSortHoare(arr, l, p);
  quickSortHoare(arr, p + 1, r);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int arr[n];
    for (int &x : arr) {
      cin >> x;
    }

    // quickSortLomuto(arr, 0, n - 1);
    quickSortHoare(arr, 0, n - 1);

    // for (int x : arr)
    //   cout << x << ' ';

    reverse(arr, arr + n);

    for (int i = 0; i < n; i++) {
      if (n % 2 == 0) {
        if (i > n / 2 - 1)
          break;
      } else {
        if (i == n / 2) {
          cout << arr[i];
          break;
        }
      }

      cout << arr[i] << ' ' << arr[n - 1 - i] << ' ';
    }
  }

  return 0;
}