#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int r) {
  int pivot = arr[r]; // chot o ben phai cung
  int i = l - 1;
  for (int j = l; j < r; j++) {
    if (arr[j] < pivot) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  // dua chot ve giua
  i++;
  swap(arr[i], arr[r]);
  return i;
}

void quickSort(int arr[], int l, int r) {
  if (l >= r) {
    return;
  }
  int p = partition(arr, l, r);
  quickSort(arr, l, p - 1);
  quickSort(arr, p + 1, r);
}

int partition2(int arr[], int l, int r) {
  int pivot = arr[l]; // chot o ben phai cung
  int i = l - 1;
  int j = r + 1;

  while (true) {
    do {
      i++;
    } while (arr[i] < pivot);

    do {
      j--;
    } while (arr[j] > pivot);

    if (i < j) {
      swap(arr[i], arr[j]);
    } else {
      return j;
    }
  }
}

void quickSort2(int arr[], int l, int r) {
  if (l >= r)
    return;
  int p = partition(arr, l, r);
  quickSort(arr, l, p);
  quickSort(arr, p + 1, r);
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  quickSort(arr, 0, n - 1);
  quickSort2(arr, 0, n - 1);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }

  return 0;
}

// 8
// 8 2 1 9 7 3 6 5