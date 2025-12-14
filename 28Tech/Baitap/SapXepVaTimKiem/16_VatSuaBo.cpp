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
  if (l >= r) {
    return;
  }

  int p = partition(arr, l, r);
  quickSort(arr, l, p - 1);
  quickSort(arr, p + 1, r);
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int &x : arr)
    cin >> x;

  quickSort(arr, 0, n - 1);

  reverse(arr, arr + n);

  int ans = 0;
  int haohut = 0;
  for (int i = 0; i < n; i++) {

    if (arr[i] + haohut > 0) {
      ans += arr[i] + haohut;
    } else {
      break;
    }

    haohut--;
  }

  cout << ans;

  return 0;
}