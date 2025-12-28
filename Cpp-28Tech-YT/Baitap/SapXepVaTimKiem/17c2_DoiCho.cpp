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
    cout << arr[i] << ' ' << arr[j] << endl;
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
  int n;
  cin >> n;
  int arr[n];
  for (int &x : arr)
    cin >> x;

  quickSort(arr, 0, n - 1);

  return 0;
}